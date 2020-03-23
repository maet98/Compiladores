#ifndef PARSERHEADER_H_INCLUDED
#define PARSERHEADER_H_INCLUDED
#include "IRcode.hpp"
using namespace std;

struct id {
  string name;
  tableVal def;
  int line;
  boolean_op op;
};

string lex;
int currentScope = 0;
vector<int> scopes(1,0);
vector<map<string, tableVal>> table;
string defReport = "\nDefinition Report\n";
string useReport = "\nUse Report\n";
string defErrorReport = "\nRedefinition Report\n";
string useErrorReport = "\nUndefined Report\n";
string typeErrorReport = "\nType Mismatch Report\n";
string idReport = "id Report\nEntry#\t\tscope\t\tname\t\ttipo\n";
bool errorsExist = 0;
extern char* yytext;
extern int yylex (void);
extern int lineCounter;
int yyerror(char* errormsg);
//table functions

string getTypeString(type val)
{
    string varType;
    switch(val)
        {
            case 1:
                varType = "integer";
                break;
            case 2:
                varType = "real";
                break;
            case 3:
                varType = "string";
                break;
            case 4:
                varType = "procedure";
        }
        return varType;
}

bool checkTable(string lexem, int scope)
{
	bool result = false;
	if(table[scope].count(lexem))
	{
		result = true;
	}
	return result;
}
tableVal isdeclared(string lexem, int scope)
{
    transform(lexem.begin(), lexem.end(), lexem.begin(), ::tolower);
    tableVal found;
    found.tipo = type::noType;
    int block;
    for(block = scope; block >= 0; block--)
    {
        if(checkTable(lexem, block))
        {
            found = table[block][lexem];
            break;
        }
    }
    if(!found.tipo)
    {
        //cout << lexem + " was not declared, line " + lineCounter << endl;
        useErrorReport += lexem + " was not declared, line " + to_string(lineCounter) + "\n";
        errorsExist = true;
    }
    else
    {
        string varType = getTypeString(found.tipo);
        //cout << lexem << " type " << varType << " block " << block << endl;
        useReport += lexem + " type " + varType +" block " + to_string(block) + "\n";
    }
    return found;
}
void insertTable(string lexem, int scope, type enumVal)
{
    transform(lexem.begin(), lexem.end(), lexem.begin(), ::tolower);
	if(!checkTable(lexem, scope))
	{
	    tableVal newEntry;
	    newEntry.tipo = enumVal;
	    newEntry.temporal = idCounter;
		table[scope][lexem] = newEntry;
		idCounter++;
		string varType = getTypeString(enumVal);
		//cout << "Declaring... " << lexem << " type " << varType << " block " << scope << endl;
		defReport += "Declaring... " + lexem + " type " + varType + " block " + to_string(scope) + "\n";
		idReport += to_string(newEntry.temporal) + "\t\t" + to_string(scope) + "\t\t" + lexem + "\t\t" + getTypeString(enumVal) + "\n";
	}
	else
	{
		//cout << lexem << " was already declared, line" << lineCounter << endl;
		defErrorReport += lexem + " was already declared, line " + to_string(lineCounter) + "\n";
		errorsExist = true;
	}
}

void removeScope() {
	table.pop_back();
}

void scopeLoader() {
	table.push_back(map<string, tableVal>());
}

type checkType(tableVal a, tableVal b)
{
    tableVal result;
    result.tipo = type::noType;

    if(a.tipo != type::procedure && b.tipo != type::procedure)
    {
        if(a.tipo == type::stringType && b.tipo == type::stringType)
        {
            result.tipo = type::stringType;
        }
        else if(a.tipo != type::stringType && b.tipo != type::stringType)
        {
            if(a.tipo == type::real || b.tipo == type::real)
            {
                result.tipo = type::real;
            }
            else
            {
                result.tipo = type::integer;
            }
        }
    }
    if(result.tipo == type::noType && a.tipo != type::noType && b.tipo != type::noType)
    {
        //cout << "type error, line " << lineCounter << endl;
        typeErrorReport += "type error, line " + to_string(lineCounter) + "\n";
        errorsExist = true;
    }
    return result.tipo;
}

#endif // PARSERHEADER_H_INCLUDED
