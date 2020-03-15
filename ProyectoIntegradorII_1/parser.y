%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

long count[61]={0};
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
		{printf("program --> title _SEMI block _EOF \n");
		count[0]++;
		}
		;

title	: _PROGRAM _ID 
		{printf("title --> _PROGRAM _ID \n"); count[1]++;}
		;

block	: vars _ENDVARS procs _ENDPROCS code
		{printf("block --> vars _ENDVARS procs _ENDPROCS code \n");count[2]++;}
		;

vars	: _VARS varlist _SEMI
		{printf("vars --> _VARS varlist _SEMI \n");count[3]++;}
		| _NOVARS
		{printf("vars --> _NOVARS \n");count[4]++;}
		;

varlist	: varlist _SEMI vardef 
		{printf("varlist --> varlist _SEMI vardef \n");count[4]++;}
		| vardef
		{printf("varlist --> vardef \n");count[5]++;}
		;

vardef	: _ID _COLON _INTEGER
		{printf("vardef --> _ID _COLON _INTEGER \n");count[5]++;}
		| _ID _COLON _REAL
		{printf("vardef --> _ID _COLON _REAL \n");count[6]++;}
		| _ID _COLON _INTEGER bn1
		{printf("vardef --> _ID _COLON _INTEGER bn1 \n");count[7]++;}
		| _ID _COLON _STRING
		{printf("vardef --> _ID _COLON _STRING \n");count[8]++;}
		;    
        
bn1		: _LBRACK nlist _RBRACK 
		{printf("bn1 --> _LBRACK nlist _RBRACK \n");count[9]++;}
		;

nlist	: nlist _COMMA _ICONST
		{printf("nlist --> nlist _COMMA _ICONST \n");count[10]++;}
		| _ICONST
		{printf("nlist --> _ICONST \n");count[11]++;}
		;

procs	: _PROCS proclist 
		{printf("procs --> _PROCS proclist \n");count[12]++;}
		| _NOPROCS
		{printf("procs --> _NOPROCS \n");count[13]++;}
		;

proclist: proclist _SEMI procdef
		{printf("proclist --> proclist _SEMI procdef \n");count[14]++;}
		| procdef
		{printf("proclist --> procdef \n"); count[15]++;}
		;

procdef	: ptitle _SEMI block 
		{printf("procdef --> ptitle _SEMI block \n");count[16]++;}
		;

ptitle	: _PROC _ID _LPAREN varlist _RPAREN
		{printf("ptitle --> _PROC _ID _LPAREN varlist _RPAREN \n");count[18]++;}
		| _PROC _ID _LPAREN _RPAREN
		{printf("ptitle --> _PROC _ID _LPAREN _RPAREN \n");count[19]++;}
        ;

code	: _BEGIN para _END 
		{ printf("code --> _BEGIN para _END \n"); count[18]++;}
		| _SEMI
		{printf("code --> _SEMI \n");count[19]++;}
		;

para	: para _SEMI stmt
		{printf("para --> para _SEMI stmt \n");count[20]++;}
		| stmt
		{printf("para --> stmt \n");count[21]++;}
		;

stmt	: assign 
		{printf("stmt --> assign \n");count[22]++;}
		| cond 
		{printf("stmt --> cond \n");count[23]++;}
		| loop 
		{printf("stmt --> loop \n");count[24]++;}
		| input 
		{printf("stmt --> input \n");count[25]++;}
		| output 
		{printf("stmt --> output \n");count[26]++;}
		| code 
		{printf("stmt --> code \n");count[27]++;}
		;

assign	: ids _ASSIGN expr
		{printf("assign --> ids _ASSIGN expr \n");count[28]++;}
		;

expr	: expr _PLUS term
		{printf("expr --> expr _PLUS term \n");count[29]++;}
		| expr _MINUS term
		{printf("expr --> expr _MINUS term \n");count[30]++;}
		| term
		{printf("expr --> term \n");count[31]++;}
		;

term	: term _MULT fac
		{printf("term --> term _MULT fac \n");count[32]++;}
		| term _DIVIDE fac
		{printf("term --> term _DIVIDE fac \n");count[33]++;}
		| fac
		{printf("term --> fac \n");count[34]++;}
		;

fac		: val
		{printf("fac --> val \n");count[35]++;}
		| _LPAREN expr _RPAREN
		{printf("fac --> _LPAREN expr _RPAREN \n");count[36]++;}
		;

val		: ids
		{printf("val --> ids \n");count[37]++;}
		| _ID _LPAREN vallist _RPAREN
		{printf("val --> _ID _LPAREN vallist _RPAREN \n");count[38]++;}
		| _ICONST
		{printf("val --> _ID _LPAREN vallist _RPAREN \n");count[39]++;}
		| _RCONST
		{printf("val --> _ID _LPAREN vallist _RPAREN \n");count[40]++;}
		;

ids		: _ID
		{printf("ids --> _ID \n");count[41]++;}
		| _ID _LBRACK vallist _RBRACK
		{printf("ids --> _ID _LBRACK vallist _RBRACK \n");count[42]++;}
		;

vallist : vallist _COMMA it
		{printf("vallist --> vallist _COMMA it \n");count[43]++;}
		| it
		{printf("vallist --> it \n");count[44]++;}

it		: _ID
		{printf("it --> _ID \n");count[45]++;}
		| _ICONST
		{printf("it --> _ICONST \n");count[46]++;}
		;

cond	: _IF expr bop expr _THEN stmt _ELSE stmt
		{printf("cond --> _IF expr bop expr _THEN stmt _ELSE stmt \n");count[47]++;}
		;

bop		: _EQL 
		{printf("bop --> _EQL \n");count[48]++;}
		| _LESS
		{printf("bop --> _LESS \n");count[49]++;}
		| _GTR
		{printf("bop --> _GTR \n");count[50]++;}
		| _LEQ 
		{printf("bop --> _LEQ \n");count[51]++;}
		| _GEQ 
		{printf("bop --> _GEQ \n");count[52]++;}
		| _NEQ 
		{printf("bop --> _NEQ \n");count[53]++;}
		;

loop	: _FOR assign _TO expr _DO stmt 
		{printf("loop --> _FOR assign _TO expr _DO stmt \n");count[54]++;}
		;

input	: _READ _LPAREN _ID _RPAREN
		{printf("input --> _READ _LPAREN _ID _RPAREN \n");count[55]++;}
		;

output	: _WRITE _LPAREN _ID _RPAREN
		{printf("output --> _WRITE _LPAREN _ID _RPAREN \n");count[56]++;}
		| _WRITE _LPAREN _LITERAL _RPAREN
		{printf("output --> _WRITE _LPAREN _LITERAL _RPAREN \n");count[57]++;}
		;

%%
void yyerror(char * message){
	if (feof(stdin) && count[0] > 0){ // Program rule was replaced 
		// END OF FILE HAPPENED
		return 0;
	}else{
		printf("Error occurred: %s\n", message);
	}
	return 0;
}
