#include <bits/stdc++.h>
#include "codeGen.h"
#include "symbTable.h"


using namespace std;

int yylex (void);
int yyparse(void);
extern char* yytext;

extern string REPORTS;

extern bool semanticError;

extern vector<string>statements;

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
    cout << endl << endl << endl << "INSTRUCTIONS" << endl;
	for(int i = 0; i < statements.size(); i++) {
		cout << statements[i] << endl;
	}
    return 0;
}
