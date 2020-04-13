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

vector<string> typeLexeme = {"nonetype", "integer", "real", "string", "procedure", "integer[]"};

struct identifier {
  string name;
  type dataType;
  int tempNumber;
};

struct symbTableContent {
  type dataType;
  int tempNumber;
};

int currentScope = 0;
vector<map<string, symbTableContent>> symbTableStack;
bool semanticError = 0;
extern char* yytext;
extern int yylex (void);
extern int lineCounter;
int yyerror(char* errormsg);

string REPORTS = "\n  REPORTS:  \n";

// decrement scope level
void popScope() {
	symbTableStack.pop_back();
}

// increment scope level
void pushScope() {
	symbTableStack.push_back(map<string, symbTableContent>());
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
        symbTableContent varContent;
        varContent.dataType = varType;
		symbTableStack[scope][varName] = varContent;
		REPORTS += "\ndeclaration of ... " + varName + " type " + typeLexeme[varType] + " scope " + to_string(scope) + "\n";
	} else {
	    REPORTS += "\nERROR Identifier redeclaration --> " + varName + " type " + typeLexeme[varType] + " scope " +  to_string(scope) + " in line " + to_string(lineCounter) + ", was already declared\n";
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
	int foundScope = scope;
	for(int i = scope; i >= 0; i--){
		if(symbTableStack[i].count(varName)) {
			var.dataType = symbTableStack[i][varName].dataType;
			var.tempNumber = symbTableStack[i][varName].tempNumber;
			foundScope = i;
			break;
		}
	}
	if(var.dataType == type::nonetype) { // variable not declared
        REPORTS += "\nERROR Use-definition --> variable " + varName + " used in line " + to_string(lineCounter) + ", was not declared.\n";
		semanticError = true;
	}else {
	    REPORTS += "\nuse of ... " + varName + " type " + typeLexeme[var.dataType] + " declared in scope " + to_string(foundScope) + " used in scope " + to_string(scope)  + "\n";
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
        REPORTS += "\nERROR Type Check --> line " + to_string(lineCounter) + "\n";
        semanticError = true;
    }
    return result;
}

void checkForExprRule(type dataType)
{
	if(dataType != type::integer)
	{
		REPORTS += "\nERROR Type --> expression in for loop must be integer. \n";
		semanticError = true;
	}
}

void checkForAssignRule(type dataType)
{
	if(dataType != type::integer)
	{
		REPORTS += "\nERROR Type --> identifier type in for loop must be integer. \n";
		semanticError = true;
	}
}

type checkArrayIndexesType(type a, type b) {
	if(a == type::integer && b == type::integer) {
		return type::integer;
	}
	return type::nonetype;
}

void reportNonProcedureError(identifier id) {
	if(id.dataType != type::procedure) {
        REPORTS += "\nERROR --> An attempt is made to invoke variable " + id.name + " when it is not a procedure. line " + to_string(lineCounter) + "\n";
		semanticError = true;
	}
}

void reportIndexingInANonArrayVariableError(identifier id, int currentScope) {
	if(id.dataType != type::integerArray) {
        REPORTS += "\nERROR --> An attempt is made to index variable " + id.name + " when it is not an array. line " + to_string(lineCounter) + "\n";
		semanticError = true;
	}
}

void reportIndexationError(type indexType) {
	if(indexType != type::integer) {
        REPORTS += "\nERROR --> An attempt is made to index an array with an identifier that is not an integer. line " + to_string(lineCounter) + "\n";
		semanticError = true;
	}
}


#endif // PARSERHEADER_H_INCLUDED
