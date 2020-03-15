#include <stdio.h>
#include <stdlib.h>

extern int yyparse (void);
extern long count[61];

char* rules[] = {
    "program --> title _SEMI block _EOF",
    "title --> _PROGRAM _ID",
    "block --> vars _ENDVARS procs _ENDPROCS code",
    "vars --> _VARS varlist _SEMI",
    "vars --> _NOVARS",
    "varlist --> varlist _SEMI vardef",
    "varlist --> vardef",
    "vardef --> _ID _COLON _INTEGER",
    "vardef --> _ID _COLON _REAL",
    "vardef --> _ID _COLON _INTEGER bn1",
    "vardef --> _ID _COLON _STRING",
    "bn1 --> _LBRACK nlist _RBRACK",
    "nlist --> nlist _COMMA _ICONST",
    "nlist --> _ICONST",
    "procs --> _PROCS proclist",
    "procs --> _NOPROCS",
    "proclist --> proclist _SEMI procdef",
    "proclist --> procdef",
    "procdef --> ptitle _SEMI block",
    "ptitle --> _PROC _ID _LPAREN varlist _RPAREN",
    "ptitle --> _PROC _ID _LPAREN _RPAREN",
    "code --> _BEGIN para _END",
    "code --> _SEMI",
    "para --> para _SEMI stmt",
    "para --> stmt",
    "stmt --> assign",
    "stmt --> cond",
    "stmt --> loop",
    "stmt --> input",
    "stmt --> output",
    "stmt --> code",
    "assign --> ids _ASSIGN expr",
    "expr --> expr _PLUS term",
    "expr --> expr _MINUS term",
    "expr --> term",
    "term --> term _MULT fac",
    "term --> term _DIVIDE fac",
    "term --> fac",
    "fac --> val",
    "fac --> _LPAREN expr _RPAREN",
    "val --> ids",
    "val --> _ID _LPAREN vallist _RPAREN",
    "val --> _ID _LPAREN vallist _RPAREN",
    "val --> _ID _LPAREN vallist _RPAREN",
    "ids --> _ID",
    "ids --> _ID _LBRACK vallist _RBRACK",
    "vallist --> vallist _COMMA it",
    "vallist --> it",
    "it --> _ID",
    "it --> _ICONST",
    "cond --> _IF expr bop expr _THEN stmt _ELSE stmt",
    "bop --> _EQL",
    "bop --> _LESS",
    "bop --> _GTR",
    "bop --> _LEQ",
    "bop --> _GEQ",
    "bop --> _NEQ",
    "loop --> _FOR assign _TO expr _DO stmt",
    "input --> _READ _LPAREN _ID _RPAREN",
    "output --> _WRITE _LPAREN _ID _RPAREN",
    "output --> _WRITE _LPAREN _LITERAL _RPAREN"
};


int main()
{
    int result = yyparse();
    int total = 0;
    int n = 58;
    for(int i = 0; i < n; i++){
        total += count[i];
    }
    int cntUsedRules = 0;
    printf("\n Percentage of reductions for each used rule: \n");
    for(int i = 0; i < n; i++){
        if(count[i] != 0){
            cntUsedRules ++;
            printf("%s  : %.2f\n",rules[i],((float)count[i]*100)/total);
        }
    }
    printf("Percentage of grammar rules used: %d / %d = %d", cntUsedRules, n, (cntUsedRules * 100 / n));
    printf("\n\n****************************************\n");
    return 0;
}
