%{
    #include <stdio.h>
    #include <ctype.h>
%}
%start line
%token DIGIT
%%

line : expr '\n'
        ;
expr: expr '+' term
    | term 
        ;

term : term '*' fact
    |   fact
        ;

fact : '(' expr ')'
    |   DIGIT

%%