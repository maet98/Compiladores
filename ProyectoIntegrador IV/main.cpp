#include <bits/stdc++.h>
using namespace std;

int yyparse(void);

extern string REPORTS;

extern bool semanticError;

extern vector<string> ICStatements;

extern vector<string> constantReport[4];


void printConstTable(int constType) {
	if(constantReport[constType].size() > 0){
		vector<string>arr[3];
		vector<int>maxLength(3,0);
		for(string x: constantReport[constType]){
			char* temp[3];
			sscanf(x.c_str(),"%s %s %s",temp[0],temp[1],temp[2]);
			for(int i = 0;i < 3;i++){
				arr[i].push_back(temp[i]);
			}
			for(int i = 0;i < 3;i++){
				maxLength[i] = max(maxLength[i],(int)arr[i].size());
			}
		}
		string headers[] = {"Lexeme","scope","tempNumber"};
		for(int i = 0;i < 3;i++){
			maxLength[i] = max(maxLength[i],(int)headers[i].size());
		}
		for(int i= 0;i < 2;i++){
			printf("%.*s\t\t\t",maxLength[i],headers[i].c_str());
		}
		printf("%.*s\n",maxLength[2],headers[2].c_str());

		cout << "Lexeme\t\t\ttempNumber\n";
		int n = constantReport[constType].size();
		for(int i = 0;i < n;i++){
			for(int j = 0;j < 2;j++) {
				printf("%.*s\t\t\t",maxLength[j],arr[j][i].c_str());
			}
			printf("%.*s\n",maxLength[2],arr[2][i].c_str());
		}
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
