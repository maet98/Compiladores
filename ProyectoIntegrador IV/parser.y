%{
#include <bits/stdc++.h>
#include "codeGen.h"
#include "symbTable.h"

#define YYSTYPE identifier

extern int lineCounter;

%}

%token _PROGRAM 258
%token _ENDVARS 259
%token _ENDPROCS 260
%token _VARS 261
%token _NOVARS 262
%token _INTEGER 263
%token _REAL 264
%token _STRING 265
%token _PROCS 266
%token _NOPROCS 267
%token _PROC 268
%token _BEGIN 269
%token _END 270
%token _FOR 271
%token _TO 272
%token _DO 273
%token _IF 274
%token _THEN 275
%token _ELSE 276
%token _READ 277
%token _WRITE 278
%token _LBRACK 279
%token _RBRACK 280
%token _LPAREN 281
%token _RPAREN 282
%token _SEMI 283
%token _COLON 284
%token _COMMA 285
%token _ASSIGN 286
%token _PLUS 287
%token _MINUS 288
%token _MULT 289
%token _DIVIDE 290
%token _EQL 291
%token _LESS 292
%token _GTR 293
%token _LEQ 294
%token _GEQ 295
%token _NEQ 296
%token _ID 297
%token _ICONST 298
%token _RCONST 299
%token _ECONST 300
%token _LITERAL 301
%token _WHILE 302
%token _UNTIL 303


%start program

%%

program	: title _SEMI block
		{
			// Labels the end of the intermediate code.
			addICStatement(quadrupleOperator::HALT,0,0,0);
		}
		;

id		: _ID
		{
			$$.name = yytext;
		}
		;

title	: _PROGRAM id
		{
			pushScope();
		}
		;

block	: vars _ENDVARS procs _ENDPROCS code
		{
			currentScope --;
			popScope();
		}
		;

vars	: _VARS varlist _SEMI
		{}
		| _NOVARS
		{}
		;

varlist	: varlist _SEMI vardef
		{}
		| vardef
		{}
		;

vardef	: id _COLON _INTEGER
		{
			installOnTable($1.name, currentScope, type::integer);
			// IC module.
			addTemporalToIdOrConst($1.name,currentScope, tempType::id);
		}
		| id _COLON _REAL
		{
			installOnTable($1.name, currentScope, type::real);
			// IC module.
			addTemporalToIdOrConst($1.name, currentScope,tempType::id);
		}
		| id _COLON _INTEGER bn1
		{
			installOnTable($1.name, currentScope, type::integerArray);
			// IC module.
			addTemporalToIdOrConst($1.name, currentScope,tempType::id);
		}
		| id _COLON _STRING
		{
			installOnTable($1.name, currentScope, type::stringType);
			// IC module.
			addTemporalToIdOrConst($1.name, currentScope,tempType::id);
		}
		;

bn1		: _LBRACK nlist _RBRACK
		{}
		;

nlist	: nlist _COMMA _ICONST
		{}
		| _ICONST
		{}
		;

procs	: _PROCS proclist
		{}
		| _NOPROCS
		{}
		;

proclist: proclist _SEMI procdef
		{}
		| procdef
		{}
		;

procdef	: ptitle _SEMI block
		{}
		;

procedureDeclaration	: _PROC id
		{
			installOnTable($2.name, currentScope, type::procedure);

			// IC module.
			addTemporalToIdOrConst($2.name, currentScope,tempType::id);

			currentScope++;
			pushScope();
		}
		;

ptitle	: procedureDeclaration _LPAREN varlist _RPAREN
		{}
		| procedureDeclaration _LPAREN _RPAREN
		{}
        ;

code	: _BEGIN para _END
		{}
		| _SEMI
		{}
		;

para	: para _SEMI stmt
		{}
		| stmt
		{}
		;

stmt	: assign
		{}
		| cond
		{}
		| loop
		{}
		| input
		{}
		| output
		{}
		| code
		{}
		;

assign	: ids _ASSIGN expr
		{
			checkTypeCompatibility($1.dataType, $3.dataType);

			// IC module.
			addICStatement(quadrupleOperator::ASSGN, $3.tempNumber, 0, $1.tempNumber);
			$$.tempNumber = $1.tempNumber;
			$$.dataType = $3.dataType;
		}
		;

expr	: expr _PLUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			// IC module.
			$$.tempNumber = createTemporal();
			addICStatement(quadrupleOperator::PLUS,$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| expr _MINUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			// IC module.
			$$.tempNumber = createTemporal();
			addICStatement(quadrupleOperator::SUB,$1.tempNumber,$3.tempNumber,$$.tempNumber);

		}
		| term
		{
			$$.dataType = $1.dataType;
			// IC module.
			$$.tempNumber = $1.tempNumber;
		}
		;

term	: term _MULT fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			// IC module.
			$$.tempNumber = createTemporal();
			addICStatement(quadrupleOperator::MULT,$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| term _DIVIDE fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			// IC module.
			$$.tempNumber = createTemporal();
			addICStatement(quadrupleOperator::DIV,$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| fac
		{
			$$.dataType = $1.dataType;
			// IC module.
			$$.tempNumber = $1.tempNumber;
		}
		;

fac		: val
		{
			$$.dataType = $1.dataType;
			// IC module.
			$$.tempNumber = $1.tempNumber;
		}
		| _LPAREN expr _RPAREN
		{
			$$.dataType = $2.dataType;
			// IC module.
			$$.tempNumber = $2.tempNumber;
		}
		;

val		: ids
		{
			$$.dataType = $1.dataType;
			// IC module.
			$$.tempNumber = $1.tempNumber;
		}
		| id _LPAREN vallist _RPAREN
		{
			// check if is a procedure
			// check if is declared
			$1 = getDeclaration($1.name, currentScope);
			reportNonProcedureError($1);
			$$.dataType = $1.dataType; // type procedure = type void
		}
		| _ICONST
		{
			$$.dataType = type::integer;
			// IC module.
			$$.tempNumber = addTemporalToIdOrConst(yytext, currentScope, tempType::intConst);
			installConstantOnTable($$.tempNumber, yytext, currentScope, type::integer);
		}
		| _RCONST
		{
			$$.dataType = type::real;
			// IC module.
			$$.tempNumber = addTemporalToIdOrConst(yytext, currentScope, tempType::realConst);
			installConstantOnTable($$.tempNumber, yytext, currentScope, type::real);
		}
		;

ids		: id
		{
			$$ = getDeclaration($1.name, currentScope);
		}
		| id _LBRACK vallist _RBRACK
		{
			// type must be array integer
			$1 = getDeclaration($1.name, currentScope);
			reportIndexingInANonArrayVariableError($1, currentScope);
			// vallist data type must be integer
			reportIndexationError($3.dataType);

			$$ = $1;
		}
		;

vallist : vallist _COMMA it
		{
			// for integer[] array case: indexes must be integers
			$$.dataType = checkArrayIndexesType($1.dataType, $3.dataType);
		}
		| it
		{
			$$.dataType = $1.dataType;
		}

it		: id
		{
			// avalaible: name
			// must be declared
			// get type
			$1 = getDeclaration($1.name, currentScope);
			$$ = $1;
		}
		| _ICONST
		{
			// get type
			$$.dataType = type::integer;

			// IC module.
			$$.tempNumber = addTemporalToIdOrConst(yytext, currentScope, tempType::intConst);
			installConstantOnTable($$.tempNumber, yytext, currentScope, type::integer);
		}
		;

cond	: ifHeader ifContent _ELSE stmt
		{
			// IC module.
			updateInstructionJumpLine(ICStatements.size() + 1);
		}
		;

ifHeader : _IF expr bop expr
		{
			// check type between expr1 and expr2
			checkTypeCompatibility($2.dataType, $4.dataType);

			// IC module.
			Labels.push((addICStatement(negateBooleanOperator(static_cast<quadrupleOperator>($3.tempNumber)),$2.tempNumber,$4.tempNumber,0) - 1));
		}
		;
ifContent : _THEN stmt
        {
			// IC module.
            updateInstructionJumpLine(ICStatements.size() + 2);
            Labels.push(addICStatement(quadrupleOperator::BUNC,0,0,0) - 1);
        }
        ;

bop		: _EQL
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BEQ;
		}
		| _LESS
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BLT;
		}
		| _GTR
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BGT;
		}
		| _LEQ
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BLE;
		}
		| _GEQ
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BGE;
		}
		| _NEQ
		{
			// IC module.
			$$.tempNumber = quadrupleOperator::BNE;
		}
		;

loop	: forHeader _DO stmt
		{
			// IC module.
			int temp = createTemporal();

			int increasingConstantTemp = addTemporalToIdOrConst("1", currentScope, tempType::intConst);
			installConstantOnTable(increasingConstantTemp, "1", currentScope, type::integer);

			addICStatement(quadrupleOperator::PLUS, increasingConstantTemp, $1.tempNumber,temp);
			addICStatement(quadrupleOperator::ASSGN,temp, 0, $1.tempNumber);
            addICStatement(quadrupleOperator::BUNC, 0, 0,Labels.top() + 1);
            updateInstructionJumpLine(ICStatements.size() + 1);
		}
		| whileHeader code
		{
			// IC module.
            // The line numbers of the IC ICStatements are listed stating from 1.
            addICStatement(quadrupleOperator::BUNC,0,0,Labels.top() + 1);
            updateInstructionJumpLine(ICStatements.size() + 1);
		}
		| do para _UNTIL expr bop expr
		{
			// IC module.
            int jumpingLine = Labels.top();
            Labels.pop();
            addICStatement(negateBooleanOperator(static_cast<quadrupleOperator>($5.tempNumber)),$4.tempNumber,$6.tempNumber, jumpingLine);
		}
		;

forHeader: _FOR assign _TO expr
		 {
			// IC module.
			checkForAssignRule($2.dataType);
            checkForExprRule($4.dataType);
		 	$$.tempNumber = $2.tempNumber;
			Labels.push((addICStatement(quadrupleOperator::BGT,$2.tempNumber,$4.tempNumber,0) - 1));
		 }
		 ;

do : _DO
    {
        Labels.push( (ICStatements.size() + 1) );
    }
    ;

whileHeader : _WHILE expr bop expr
            {
				// IC module.
                // This IC statement will be complete in the future. -1 to push a 0-based position.
                Labels.push((addICStatement(negateBooleanOperator(static_cast<quadrupleOperator>($3.tempNumber)),$2.tempNumber,$4.tempNumber,0) - 1));
            }
            ;

input	: _READ _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			$3 = getDeclaration($3.name, currentScope);
			// IC module.
			addICStatement(quadrupleOperator::READ, 0, 0, $3.tempNumber);
		}
		;

output	: _WRITE _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			$3 = getDeclaration($3.name, currentScope);
			// IC module.
			addICStatement(quadrupleOperator::WRITE, $3.tempNumber,0,0);
		}
		| _WRITE _LPAREN literal _RPAREN
		{
			// IC module.
			addICStatement(quadrupleOperator::WRITE, $3.tempNumber,0,0);
		}
		;
literal : _LITERAL
		{
			$$.name = yytext;

			// IC module.
			$$.tempNumber = addTemporalToIdOrConst($$.name, currentScope, tempType::literalConst);
			installConstantOnTable($$.tempNumber, $$.name, currentScope, type::stringType);
		}
		;

%%
int yyerror(char* errorMessage)
{
	fprintf(stderr, "%s in line number %d \n", errorMessage, lineCounter);
	return 1;
}
