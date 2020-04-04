#include<bits/stdc++.h>
using namespace std;

int yylex (void);
int yyparse(void);
extern char* yytext;

extern string REPORTS;

extern bool semanticError;

int main()
{
    int syntaxError = yyparse();
    cout << REPORTS << endl;
    if(syntaxError){
        cout << "Ha ocurrido un error sintactico\n";
    }else if(semanticError){
        cout << "Ha ocurrido un error semantico\n";
    }else{
        cout << "El programa se ha analizado con exito. No han ocurrido errores.\n";
    }

    return 0;
}
