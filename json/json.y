%{
#include "lex.yy.c"
%}
%token _WHITESPACE_ 1
%token _STRING_ 3
%token _FALSE_ 4
%token _TRUE_ 5
%token _NULL_ 6
%token _NUMBER_ 2
%start object
%%
/* Grammar Rules */
object : 	'{' _WHITESPACE_ '}'
		| 	'{' _WHITESPACE_ _STRING_ _WHITESPACE_ ':' value another'}'
			;

another:	',' _WHITESPACE_ _STRING_ _WHITESPACE_ ':' value
		| ''
		;

array: '[' _WHITESPACE_ ']'
	|	'[' value otro ']'
	;

var: _STRING_
	| _NUMBER_
	| object
	| array
	| _TRUE_
	| _FALSE_
	| _NULL_
	;

value: _WHITESPACE_ var _WHITESPACE_ ;

otro: ',' value otro 
	| ''
	;

%%

int main()
{
	return yyparse();
}