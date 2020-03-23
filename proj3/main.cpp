#include<bits/stdc++.h>
using namespace std;

int yylex (void);
int yyparse(void);
extern char* yytext;
extern string defReport;
extern string useReport;
extern string defErrorReport;
extern string useErrorReport;
extern string typeErrorReport;
extern string idReport;
extern string intReport;
extern string realReport;
extern string stringReport;
extern vector<string> instr;
extern bool errorsExist;

int main()
{
    int verf = yyparse();
    cout << defReport << useReport << defErrorReport << useErrorReport << typeErrorReport;
    if(!verf && !errorsExist)
    {
        cout << idReport << intReport << realReport << stringReport;
        for(int x = 0; x < instr.size(); x++)
        {
            cout << x + 1 << " " << instr[x] << endl;
        }
        cout << "valido\n";
    }
    else
    {
        if(verf)
            cout << "error sintactico\n";
        else
            cout << "error semantico\n";
    }

    return 0;
}
