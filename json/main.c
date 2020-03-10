#include<stdio.h>
#include "y.tab.c"

int main(){
    yyparse();
    return 0;
}