#include <stdio.h>
#include <stdlib.h>

extern int yyparse (void);

int main()
{
    printf("%d\n",yyparse());
    printf("\n\n ******************** \n");
    return 0;
}
