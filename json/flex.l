%option noyywrap
dig [0-9]
number '-'?(0|[1-9]d*)('.'dig+)?([eE][-+]?dig+)?
string  ["]([^\"]|[\]["/\bfnrtu])?["]
hex u(dig|[A])
true "true"
false "false"
null "null"
ws [ \r\t\n]*

%{
#include "Tokens.h"
%}

%%	
{number} 		{return (_NUMBER);}
{string}		{return (_STRING);}
{null}			{return (_NULL);}
{true}			{return (_FALSE);}
{false}			{return (_TRUE);}
{ws}			{return (_WHITESPACE);}
%%

int yyerror(char * s){
	fprintf(stderr, "%s\n",s);
	return 0;
}
