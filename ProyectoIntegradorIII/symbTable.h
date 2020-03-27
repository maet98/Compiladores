#ifndef PARSERHEADER_H_INCLUDED
#define PARSERHEADER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;

enum type{
    nonetype = 0,
    integer = 1,
    real = 2,
    stringType = 3,
    procedure = 4,
    integerArray = 5,
};

map<type, string> typeLexeme = {
	{type::nonetype, "nonetype"},
	{type::integer, "integer"},
	{type::real, "real"},
	{type::stringType, "string"},
	{type::procedure, "procedure"},
	{type::integerArray, "integer[]"}
};

struct identifier {
  string name;
  type dataType;
};

int currentScope = 0;
vector<map<string, type>> symbTableStack;
bool semanticError = 0;
extern char* yytext;
extern int yylex (void);
extern int lineCounter;
int yyerror(char* errormsg);

// reports
// Todas las declaraciones de un identificador – indicando el nombre, tipo y nivel
// Todos los usos de un identificador – indicando el nombre, tipo y nivel
// Todos los errores semánticos de definición-uso (variables no declaradas) – indicando la línea del programa y el identificador en cuestión.
// Todos los errores semánticos de verificación de tipos - indicando la línea del programa donde se econtró el error

string declarationReport = "\nIdentifier Declaration Report\n";
string identifierUseReport = "\nIdentifier Use Report\n";

string redeclarationErrorReport = "\nIdentifier redeclaration Error Report\n"; // declared more than once in the same scope.
string useDefinitionErrorReport = "\nUse-Definition Error Report\n";
string typeErrorReport = "\nType Error Report\n";

string constantsReport = "Constants Report\nEntry#\t\tscope\t\tname\t\ttype\t\tline\n";


// decrement scope level

void popScope() {
	symbTableStack.pop_back();
}
// increment scope level

void pushScope() {
	symbTableStack.push_back(map<string, type>());
}

// check if variable exist in given scope
// return true if exists
// return false if not.

bool checkTable(string varName, int scope) {
    transform(varName.begin(), varName.end(), varName.begin(), ::tolower);
	bool result = false;
	if(symbTableStack[scope].count(varName)) {
		result = true;
	}
	return result;
}

// declare variable.
// report: redeclaration error or declaration report

void installOnTable(string varName, int scope, type varType) {
	transform(varName.begin(), varName.end(), varName.begin(), ::tolower);
	if(!checkTable(varName, scope)) {
		symbTableStack[scope][varName] = varType;
		declarationReport += "Declaring... " + varName + " type " + typeLexeme[varType] + " block " + to_string(scope) + "\n";
	} else {
		redeclarationErrorReport += varName + " was already declared in line " + to_string(lineCounter) + "\n";
		semanticError = true;
	}
}

// return closest declaration of variable with lexeme varName
// in the form identifier{varName, dataType}
// if variable does not exists, return {varName, nonetype}
// report identifierUseReport or useDefinitionErrorReport
identifier getDeclaration(string varName, int scope){
    transform(varName.begin(), varName.end(), varName.begin(), ::tolower);
	identifier var;
	var.name = varName;
	var.dataType = type::nonetype;
	for(int i = scope; i >= 0; i--){
		if(symbTableStack[i].count(varName)) {
			var.dataType = symbTableStack[i][varName];
			break;
		}
	}
	if(var.dataType == type::nonetype) { // variable not declared
		useDefinitionErrorReport += varName + " was not declared, line " + to_string(lineCounter) + "\n";
		semanticError = true;
	}else {
		identifierUseReport += varName + " type " + typeLexeme[var.dataType] + " scope " + to_string(scope) + "\n";
	}
	return var;
}

// check if a and b can be operate (+, -, *, /, >, <, >=, <=, ==)
// return result type of the operation
// return nonetype if a and b cannot be operate

type checkTypeCompatibility(type a, type b) {
    type result = type::nonetype;

    if(a != type::procedure && b != type::procedure) {
        if(a == type::stringType && b == type::stringType) {
            result = type::stringType;
        } else if(a != type::stringType && b != type::stringType) {
            if(a == type::real || b == type::real) {
                result = type::real;
            } else {
                result = type::integer;
            }
        }
    }
    if(result == type::nonetype && a != type::nonetype && b != type::nonetype){
        typeErrorReport += "type error, line " + to_string(lineCounter) + "\n";
        semanticError = true;
    }
    return result;
}

// register constant

void addConstant(string lexeme, int scope, type dataType)
{
	constantsReport += to_string(scope) + "\t\t" + lexeme + "\t\t" + typeLexeme[dataType] + "\t\t" + to_string(lineCounter) + "\n";
}

type checkArrayIndexesType(type a, type b) {
	if(a == type::integer && b == type::integer) {
		return type::integer;
	}
	return type::nonetype;
}

void reportNonProcedureError(identifier id) {
	if(id.dataType != type::procedure) {
		printf("NON PROCEDURE ERROR");
	}
}

void reportIndexingInANonArrayVariableError(identifier id, int currentScope) {
	if(id.dataType != type::integerArray) {
		printf("INDEXING NON ARRAY VARIABLE ERROR");
	}
}

void reportIndexationError(type indexType) {
	if(indexType != type::integer) {
		printf("INDEXING ARRAY WITH NON INTEGER ERROR");
	}
}

#endif // PARSERHEADER_H_INCLUDED

