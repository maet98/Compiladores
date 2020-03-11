%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
%token _COMENTARIO 302
%token _ERRORLITERAL 303
%token _ERRORCOMENTARIO 304
%token _ERROR 305
%token _NEWLINE 306
%token _EOF 307

%start program

%%

program	: title _SEMI block _EOF 
		{printf("program --> title _SEMI block _EOF");}
		;

title	: _PROGRAM _ID 
		{printf("title --> _PROGRAM _ID");}
		;

block	: vars _ENDVARS procs _ENDPROCS code
		{printf("block --> vars _ENDVARS procs _ENDPROCS code");}
		;

vars	: _VARS varlist _SEMI
		{printf("vars --> _VARS varlist _SEMI");}
		| _NOVARS
		{printf("vars --> _NOVARS");}
		;

varlist	: varlist _SEMI vardef 
		{printf("varlist --> varlist _SEMI vardef");}
		| vardef
		{printf("varlist --> vardef");}
		;

vardef	: _ID _COLON _INTEGER
		{printf("vardef --> _ID _COLON _INTEGER");}
		| _ID _COLON _REAL
		{printf("vardef --> _ID _COLON _REAL");}
		| _ID _COLON _INTEGER bn1
		{printf("vardef --> _ID _COLON _INTEGER bn1");}
		| _ID _COLON _STRING
		{printf("vardef --> _ID _COLON _STRING");}
		;    
        
bn1		: _LBRACK nlist _RBRACK 
		{printf("bn1 --> _LBRACK nlist _RBRACK");}
		;

nlist	: nlist _COMMA _ICONST
		{printf("nlist --> nlist _COMMA _ICONST");}
		| _ICONST
		{printf("nlist --> _ICONST");}
		;

procs	: _PROCS proclist 
		{printf("procs --> _PROCS proclist");}
		| _NOPROCS
		{printf("procs --> _NOPROCS");}
		;

proclist: proclist _SEMI procdef
		{printf("proclist --> proclist _SEMI procdef");}
		| procdef
		{printf("proclist --> procdef");}
		;

procdef	: ptitle _SEMI block 
		{printf("procdef --> ptitle _SEMI block");}
		;

ptitle	: _PROC _ID _LPAREN varlist _RPAREN
		{printf("ptitle --> _PROC _ID _LPAREN varlist _RPAREN");}
		| _PROC _ID _LPAREN _RPAREN
		{printf("ptitle --> _PROC _ID _LPAREN _RPAREN");}
        ;

code	: _BEGIN para _END 
		{printf("code --> _BEGIN para _END");}
		| _SEMI
		{printf("code --> _SEMI");}
		;

para	: para _SEMI stmt
		{printf("para --> para _SEMI stmt");}
		| stmt
		{printf("para --> stmt");}
		;

stmt	: assign 
		{printf("stmt --> assign");}
		| cond 
		{printf("stmt --> cond");}
		| loop 
		{printf("stmt --> loop");}
		| input 
		{printf("stmt --> input");}
		| output 
		{printf("stmt --> output");}
		| code 
		{printf("stmt --> code");}
		;

assign	: ids _ASSIGN expr
		{printf("assign --> ids _ASSIGN expr");}
		;

expr	: expr _PLUS term
		{printf("expr --> expr _PLUS term");}
		| expr _MINUS term
		{printf("expr --> expr _MINUS term");}
		| term
		{printf("expr --> term");}
		;

term	: term _MULT fac
		{printf("term --> term _MULT fac");}
		| term _DIVIDE fac
		{printf("term --> term _DIVIDE fac");}
		| fac
		{printf("term --> fac");}
		;

fac		: val
		{printf("fac --> val");}
		| _LPAREN expr _RPAREN
		{printf("fac --> _LPAREN expr _RPAREN");}
		;

val		: ids
		{printf("val --> ids");}
		| _ID _LPAREN vallist _RPAREN
		{printf("val --> _ID _LPAREN vallist _RPAREN");}
		| _ICONST
		{printf("val --> _ID _LPAREN vallist _RPAREN");}
		| _RCONST
		{printf("val --> _ID _LPAREN vallist _RPAREN");}
		;

ids		: _ID
		{printf("ids --> _ID");}
		| _ID _LBRACK vallist _RBRACK
		{printf("ids --> _ID _LBRACK vallist _RBRACK");}
		;

vallist : vallist _COMMA it
		{printf("vallist --> vallist _COMMA it");}
		| it
		{printf("vallist --> it");}

it		: _ID
		{printf("it --> _ID");}
		| _ICONST
		{printf("it --> _ICONST");}
		;

cond	: _IF expr bop expr _THEN stmt _ELSE stmt
		{printf("cond --> _IF expr bop expr _THEN stmt _ELSE stmt");}
		;

bop		: _EQL 
		{printf("bop --> _EQL");}
		| _LESS
		{printf("bop --> _LESS");}
		| _GTR
		{printf("bop --> _GTR");}
		| _LEQ 
		{printf("bop --> _LEQ");}
		| _GEQ 
		{printf("bop --> _GEQ");}
		| _NEQ 
		{printf("bop --> _NEQ");}
		;

loop	: _FOR assign _TO expr _DO stmt 
		{printf("loop --> _FOR assign _TO expr _DO stmt");}
		;

input	: _READ _LPAREN _ID _RPAREN
		{printf("input --> _READ _LPAREN _ID _RPAREN");}
		;

output	: _WRITE _LPAREN _ID _RPAREN
		{printf("output --> _WRITE _LPAREN _ID _RPAREN");}
		| _WRITE _LPAREN _LITERAL _RPAREN
		{printf("output --> _WRITE _LPAREN _LITERAL _RPAREN");}
		;

%%
void yyerror(char * message){
	printf("error ocurred: %s\n", message);
	return 0;
}
