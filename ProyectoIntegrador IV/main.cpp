#include <bits/stdc++.h>
using namespace std;

int yyparse(void);

extern string REPORTS;

extern bool semanticError;

extern vector<string> ICStatements;

extern vector<string> constantReport[4];


void printConstTable(int constType) {
    cout << "Lexeme \t\t\t scope \t\t\t tempNumber\n";
	for(string x : constantReport[constType]){
		cout << x << endl;
	}
}

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

        cout << endl << endl << "Table ID temporal numbers" << endl;
        printConstTable(0);
        cout << endl << "Table INTEGER constants temporal numbers" << endl;
        printConstTable(1);
        cout << endl << "Table REAL constants temporal numbers" << endl;
        printConstTable(2);
        cout << endl << "Table LITERAL constants temporal numbers" << endl;
        printConstTable(3);

        cout << endl << endl << "INSTRUCTIONS" << endl;
        for(int i = 0; i < ICStatements.size(); i++) {
            cout << i + 1 << " " << ICStatements[i] << endl;
        }
    }
    return 0;
}
