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
			char temp[3][100];
			sscanf(x.c_str(),"%s %s %s",temp[0],temp[1],temp[2]);
			for(int i = 0;i < 3;i++){
				arr[i].push_back(temp[i]);
			}
			for(int i = 0;i < 3;i++){
				maxLength[i] = max(maxLength[i],(int)arr[i].back().size());
			}
		}
		string headers[] = {"Lexeme","scope","tempNumber"};
		for(int i = 0;i < 3;i++){
			maxLength[i] = max(maxLength[i],(int)headers[i].size());
		}
		for(int i= 0;i < 2;i++){
			printf("%s",headers[i].c_str());
            int j = maxLength[i]-headers[i].size();
            while(j > 0){
                printf(" ");
                j--;
            }
            printf("\t\t\t");
		}
		printf("%s\n",headers[2].c_str());

		int n = constantReport[constType].size();
		for(int i = 0;i < n;i++){
			for(int j = 0;j < 2;j++) {
				printf("%s",arr[j][i].c_str());
				int k = maxLength[j] - arr[j][i].size();
                while(k > 0){
                    printf(" ");
                    k--;
                }
                printf("\t\t\t");
			}
			printf("%s\n",arr[2][i].c_str());
		}
	}
}

void printLiteralConstants() {
    cout << "Lexeme \t\t\t scope \t\t\t Temporal Number \n";
    for(auto x : constantReport[3]) {
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
        if(constantReport[0].size() > 0) {
            cout << endl << endl << "Table ID temporal numbers" << endl;
            printConstTable(0);
        }
        if(constantReport[1].size() > 0) {
            cout << endl << "Table INTEGER constants temporal numbers" << endl;
            printConstTable(1);
        }
        if(constantReport[2].size() > 0) {
            cout << endl << "Table REAL constants temporal numbers" << endl;
            printConstTable(2);
        }
        if(constantReport[3].size() > 0) {
            cout << endl << "Table LITERAL constants temporal numbers" << endl;
            printLiteralConstants();
        }
        cout << endl << endl << "INSTRUCTIONS" << endl;
        for(int i = 0; i < ICStatements.size(); i++) {
            cout << i + 1 << " " << ICStatements[i] << endl;
        }
    }
    return 0;
}
