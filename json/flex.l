%option noyywrap
ws [ \r\t\n]*
dig     [0-9]
number '-'?(0|[1-9]d*)('.'dig+)?([eE][-+]?dig+)?
hex u(dig|[A])
string  ["]([^\"]|[\]["/\bfnrtu])?["] | 

%{
#include "Tokens.h"

int tokenCount;
%}

%%																		{tokenCount++;	return (RPAREN);}
"8"("0"|"2"|"4")"9""-"{D}{D}{D}"-"{D}{D}{D}{D}										{tokenCount++;	return(TELE);}
(("1""9"(("6"[2-9])|([7-9]{D})))|("2""0"("0"|"1"){D}))"-"{D}{D}{D}{D}  				{tokenCount++;	return(MATRICULA);}
({ALFA})+"@"{ALFA}+("."{ALFA}+)+													{tokenCount++;	return(CORREO);}
"C"(("S""T""I")|("S""D"))"-"{D}{D}{D}{D}"-"{D}{D}{D}{D}"-"{carreras}"-"{D}{D}{D}	{tokenCount++;	return(ASGPVA);}
{SCHEME}":""/""/"{AUTHORITY}?{PATH}{QUERY}?{FRAG}?								{tokenCount++;	return(URL);}

.

%%

void yyerror(int tokenCount)
{
	printf("Hubo un error al analizar el lexema %s en la columna %d", yytext, tokenCount);
	exit(1);
}
