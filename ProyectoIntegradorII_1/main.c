#include <stdio.h>
#include <stdlib.h>

extern int yyparse (void);

int main()
{
    printf("%d\n", yylex());
    // printf("%d", yyparse());
    printf("\n\n ******************** \n");
    return 0;
}
