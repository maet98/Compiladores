%option noyywrap

ws [ \t]+
PROGRAM [pP][rR][oO][gG][rR][aA][mM]
ENDVARS [eE][nN][dD][vV][aA][rR][sS]
ENDPROCS [eE][nN][dD][pP][rR][oO][cC][sS]
VARS  [vV][aA][rR][iI][aA][bB][lL][eE][sS]
NOVARS [nN][oO][vV][aA][rR][iI][aA][bB][lL][eE][sS]
INTEGER [iI][nN][tT][eE][gG][eE][rR]
REAL [rR][eE][aA][lL]
STRING [sS][tT][rR][iI][nN][gG]
PROCS [pP][rR][oO][cC][eE][dD][uU][rR][eE][sS]
NOPROCS [nN][oO][pP][rR][oO][cC][eE][dD][uU][rR][eE][sS]
PROC [pP][rR][oO][cC][eE][dD][uU][rR][eE]
BEGIN [bB][eE][gG][iI][nN]
END [eE][nN][dD]
FOR [fF][oO][rR]
TO [tT][oO]
DO [dD][oO]
IF [iI][fF]
THEN [tT][hH][eE][nN]
ELSE [eE][lL][sS][eE]
READ [rR][eE][aA][dD]
WRITE [wW][rR][iI][tT][eE]
LBRACK "[" 
RBRACK "]" 
LPAREN "(" 
RPAREN ")" 
SEMI ";" 
COLON ":" 
COMMA "," 
ASSIGN ":=" 
PLUS "+" 
MINUS "-" 
MULT "*" 
DIVIDE "/" 
EQL "=" 
LESS "<" 
GTR ">" 
LEQ "<=" 
GEQ ">=" 
NEQ "<>"
ID [_a-zA-Z][_a-zA-Z0-9]*
ICONST ("-"|"+")?[0-9]+
RCONST {ICONST}|({ICONST})?[.][0-9]+
ECONST {RCONST}[eE]("-"|"+")?[0-9]+
LITERAL ["][^"\n]*["]
COMENTARIO [{]([^}\n])*[}]
ERRORLITERAL ["][^"\n]*
ERRORCOMENTARIO "{"([^}\n])*
newline [\n]+

%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"
int tokenCount;
%}

%%
{ws}		{/* space and tab */}
{COMENTARIO}	{tokenCount++; return (_COMENTARIO);}
{PROGRAM}	{tokenCount++; return (_PROGRAM);}
{ENDVARS}	{tokenCount++; return (_ENDVARS);}
{ENDPROCS}	{tokenCount++; return (_ENDPROCS);}
{VARS}		{tokenCount++; return (_VARS);}
{NOVARS}	{tokenCount++; return (_NOVARS);}
{INTEGER}	{tokenCount++; return (_INTEGER);}
{REAL}		{tokenCount++; return (_REAL);}
{STRING}	{tokenCount++; return (_STRING);}
{PROCS}		{tokenCount++; return (_PROCS);}
{NOPROCS}	{tokenCount++; return (_NOPROCS);}
{PROC}		{tokenCount++; return (_PROC);}
{BEGIN}		{tokenCount++; return (_BEGIN);}
{END}		{tokenCount++; return (_END);}
{FOR}		{tokenCount++; return (_FOR);}
{TO}		{tokenCount++; return (_TO);}
{DO}		{tokenCount++; return (_DO);}
{IF}		{tokenCount++; return (_IF);}
{THEN}		{tokenCount++; return (_THEN);}
{ELSE}		{tokenCount++; return (_ELSE);}
{READ}		{tokenCount++; return (_READ);}
{WRITE}		{tokenCount++; return (_WRITE);}
{LBRACK}	{tokenCount++; return (_LBRACK);}
{RBRACK}	{tokenCount++; return (_RBRACK);}
{LPAREN}	{tokenCount++; return (_LPAREN);}
{RPAREN}	{tokenCount++; return (_RPAREN);}
{SEMI}		{tokenCount++; return (_SEMI);}
{COLON}		{tokenCount++; return (_COLON);}
{COMMA}		{tokenCount++; return (_COMMA);}
{ASSIGN}	{tokenCount++; return (_ASSIGN);}
{PLUS}		{tokenCount++; return (_PLUS);}
{MINUS}		{tokenCount++; return (_MINUS);}
{MULT}		{tokenCount++; return (_MULT);}
{DIVIDE} 	{tokenCount++; return (_DIVIDE);}
{EQL}		{tokenCount++; return (_EQL);}
{LESS}		{tokenCount++; return (_LESS);}
{GTR}		{tokenCount++; return (_GTR);}
{LEQ} 		{tokenCount++; return (_LEQ);}
{GEQ}		{tokenCount++; return (_GEQ);}
{NEQ}		{tokenCount++; return (_NEQ);}
{ID}		{tokenCount++; return (_ID);}
{ICONST}	{tokenCount++; return (_ICONST);}
{RCONST}	{tokenCount++; return (_RCONST);}
{ECONST}	{tokenCount++; return (_ECONST);}
{LITERAL}	{tokenCount++; return (_LITERAL);}
{ERRORLITERAL}  {tokenCount++; return (_ERRORLITERAL);}
{ERRORCOMENTARIO} {tokenCount++; return (_ERRORCOMENTARIO);}
<<eof>>			{tokenCount++; return(_EOF);}
%%
/*
void yyerror(int tokenCount)
{
	printf("Hubo un error al analizar el lexema ' %s '. Este es el lexema numero: %d", yytext, tokenCount);
	exit(1);
} */
