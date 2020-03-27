#include<bits/stdc++.h>
using namespace std;

int yylex (void);
int yyparse(void);
extern char* yytext;

extern string declarationReport;
extern string identifierUseReport;
extern string redeclarationErrorReport;
extern string useDefinitionErrorReport;
extern string typeErrorReport;
extern string constantsReport;

extern bool semanticError;

int main()
{
    int syntaxError = yyparse();
    cout << declarationReport << endl;
    cout << identifierUseReport << endl;
    cout << redeclarationErrorReport << endl;
    cout << useDefinitionErrorReport << endl;
    cout << typeErrorReport << endl;
    cout << constantsReport << endl;
    if(syntaxError){
        cout << "Syntax\n";
    }else{
        cout << "error semantico\n";
    }

    return 0;
}
