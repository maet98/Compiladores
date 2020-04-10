%{
#include "symbTable.h"
#include "codeGen.h"

#define YYSTYPE identifier

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
		{}
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
			addTemp($1.name,tempType::id);
		}
		| id _COLON _REAL
		{
			installOnTable($1.name, currentScope, type::real);
			addTemp($1.name,tempType::id);
		}
		| id _COLON _INTEGER bn1
		{
			installOnTable($1.name, currentScope, type::integerArray);
			addTemp($1.name,tempType::id);
		}
		| id _COLON _STRING
		{
			installOnTable($1.name, currentScope, type::stringType);
			addTemp($1.name,tempType::id);
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
			addStatement("ASSGN",$3.tempNumber,0,$1.tempNumber);
		}
		;

expr	: expr _PLUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			$$.tempNumber = createTemp();
			addStatement("PLUS",$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| expr _MINUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			$$.tempNumber = createTemp();
			addStatement("SUB",$1.tempNumber,$3.tempNumber,$$.tempNumber);

		}
		| term
		{
			$$.dataType = $1.dataType;
			$$.tempNumber = $1.tempNumber;
		}
		;

term	: term _MULT fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			$$.tempNumber = createTemp();
			addStatement("MULT",$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| term _DIVIDE fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
			$$.tempNumber = createTemp();
			addStatement("DIV",$1.tempNumber,$3.tempNumber,$$.tempNumber);
		}
		| fac
		{
			$$.dataType = $1.dataType;
			$$.tempNumber = $1.tempNumber;
		}
		;

fac		: val
		{
			$$.dataType = $1.dataType;
			$$.tempNumber = $1.tempNumber;
		}
		| _LPAREN expr _RPAREN
		{
			$$.dataType = $2.dataType;
			$$.tempNumber = $2.tempNumber;
		}
		;

val		: ids
		{
			$$.dataType = $1.dataType;
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
			$$.tempNumber = addTemp(yytext, tempType::intConst);
		}
		| _RCONST
		{
			$$.dataType = type::real;
			$$.tempNumber = addTemp(yytext, tempType::realConst);
		}
		;

ids		: id
		{
			$$ = getDeclaration($1.name, currentScope);
			$$.tempNumber = (constTable[tempType::idConst][$1.name]);
		}
		| id _LBRACK vallist _RBRACK
		{
			// type must be array integer
			$1 = getDeclaration($1.name, currentScope);
			reportIndexingInANonArrayVariableError($1, currentScope);
			// vallist data type must be integer
			reportIndexationError($3.dataType);

			$$.dataType = $1.dataType;
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
			// report use of constant...
			addConstant(yytext, currentScope, type::integer);
			$$.dataType = type::integer;
		}
		;

cond	: ifPart elsePart
		{
			// check type between expr1 and expr2
			checkTypeCompatibility($2.dataType, $4.dataType);
		}
		;

ifPart 	: _IF expr bop expr _THEN stmt
		{
			Labels.push(addStatement(negateBooleanOperator($3.tempNumber),$2.tempNumber,$4.tempNumber,0));
			addStatement("BUNC",0,0,0);
		}
		;

elsePart : _ELSE stmt
		{
			addStatement("BUNC",0,0,0);
		}
		;

bop		: _EQL
		{
			$$.tempNumber = booleanOperation::EQL;
		}
		| _LESS
		{
			$$.tempNumber = booleanOperation::LESS;
		}
		| _GTR
		{
			$$.tempNumber = booleanOperation::GTR;
		}
		| _LEQ
		{
			$$.tempNumber = booleanOperation::LEQ;
		}
		| _GEQ
		{
			$$.tempNumber = booleanOperation::GEQ;
		}
		| _NEQ
		{
			$$.tempNumber = booleanOperation::NEQ;
		}
		;

loop	: _FOR assign _TO expr _DO stmt
		{}
		| _WHILE expr bop expr code
		{}
		| _DO code _UNTIL expr bop expr
		{}
		;
		
		
// EXPR SOLO ACEPTA INT
input	: _READ _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			getDeclaration($3.name, currentScope);
			addStatement("READ",0,0, constTable[tempType::idConst][$3.name]);
		}
		;

output	: _WRITE _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			getDeclaration($3.name, currentScope);
			addStatement("WRITE", constTable[tempType::idConst][$3.name],0,0);
		}
		| _WRITE _LPAREN literal _RPAREN
		{
			addStatement("WRITE", constTable[tempType::literalConst][$3.name],0,0);
		}
		;
literal : _LITERAL
		{
			$$.name = yytext;
			addTemp($$.name,tempType::literalConst);
		}
		;

%%
int yyerror(char* errorMessage)
{
	fprintf(stderr, "%s\n", errorMessage);
	return 1;
}
