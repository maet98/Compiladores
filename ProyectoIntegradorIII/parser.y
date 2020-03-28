%{
#include "symbTable.h"

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
		}
		| id _COLON _REAL
		{
			installOnTable($1.name, currentScope, type::real);
		}
		| id _COLON _INTEGER bn1
		{
			installOnTable($1.name, currentScope, type::integerArray);
		}
		| id _COLON _STRING
		{
			installOnTable($1.name, currentScope, type::stringType);
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
		}
		;

expr	: expr _PLUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
		}
		| expr _MINUS term
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
		}
		| term
		{
			$$.dataType = $1.dataType;
		}
		;

term	: term _MULT fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
		}
		| term _DIVIDE fac
		{
			$$.dataType = checkTypeCompatibility($1.dataType, $3.dataType);
		}
		| fac
		{
			$$.dataType = $1.dataType;
		}
		;

fac		: val
		{
			$$.dataType = $1.dataType;
		}
		| _LPAREN expr _RPAREN
		{
			$$.dataType = $2.dataType;
		}
		;

val		: ids
		{
			$$.dataType = $1.dataType;
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
			addConstant(yytext, currentScope, type::integer);
		}
		| _RCONST
		{
			$$.dataType = type::real;
			addConstant(yytext, currentScope, type::real);
		}
		;

ids		: id
		{
			$$ = getDeclaration($1.name, currentScope);;
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

cond	: _IF expr bop expr _THEN stmt _ELSE stmt
		{
			// check type between expr1 and expr2
			checkTypeCompatibility($2.dataType, $4.dataType);
		}
		;

bop		: _EQL
		{}
		| _LESS
		{}
		| _GTR
		{}
		| _LEQ
		{}
		| _GEQ
		{}
		| _NEQ
		{}
		;

loop	: _FOR assign _TO expr _DO stmt
		{}
		;

input	: _READ _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			getDeclaration($3.name, currentScope);
		}
		;

output	: _WRITE _LPAREN id _RPAREN
		{
			// id must be declared
			// report use
			getDeclaration($3.name, currentScope);
		}
		| _WRITE _LPAREN literal _RPAREN
		{
			// report use of constant...
			addConstant($3.name, currentScope, type::stringType);
		}
		;
literal : _LITERAL
		{
			$$.name = yytext;
		}
		;

%%
int yyerror(char* errorMessage)
{
	fprintf(stderr, "%s\n", errorMessage);
	return 1;
}
