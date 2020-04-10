#ifndef PARSERHEADER_H_INCLUDED
#define PARSERHEADER_H_INCLUDED
#include<bits/stdc++.h>
#include"symbTable.h"
using namespace std;

enum boolOperation{
	EQL,
	NEQ,
	LESS,
	GTR,
	GEQ,
	LEQ
};


/**

TODO: funcion que genere un numero para constantes
id 0 - 200
int 200 - 300
real 300 - 400
literal 400 - 500

TODO: funcion que genere numero de variables temporales.
de -infinito a -1 inclusive

TODO: asociar un ID/constante con su numero de temporal.

(op, p, s , r)

**/

//Estructura para guardar las constantes
map<string,int>constTable[4];

//Contador de las constantes divididas por tipos
vector<int>contadores(4,0);

//vector de statements
vector<string>statements;

//vector de operaciones
string boolOperations[] = {"BEQ","BNE","BLT","BGT","BGE","BLE"};

int offset[] = { 0, 200, 300,400};

//enum for the types
enum tempType{
	idVar,
	intConst,
	realConst,
	literalConst
};

stack<int>Labels;

int addTemp(string lexem,tempType tipo)
{
    if(constTable[tipo].count(lexem))
    {
        return constTable[tipo][lexem];
    }
    constTable[tipo][lexem] = ++contadores[tipo];
    return contadores[tipo];
}

int temp = 0;
int createTemp(){
	return --temp;
}

int addStatement(string op, int a, int b, int res){
	string resultado = op +" "+ to_string(a)+" "+ to_string(b)+" "+to_string(res);
	statements.push_back(resultado);
	return statements.size();
}

string getBooleanOperator(boolOperation operation){
	return boolOperations[operation];
}

boolOperation negateBooleanOperator(boolOperation operation){
	switch(operation){
		case boolOperation::EQL:
			return boolOperation::NEQ;

		case boolOperation::NEQ:
			return boolOperation::EQL;

		case boolOperation::GEQ:
			return boolOperation::LESS;
			
		case boolOperation::LESS:
			return boolOperation::GEQ;

		case boolOperation::LEQ:
			return boolOperation::GTR;

		case boolOperation::GTR:
			return boolOperation::LEQ;
	}
}

#endif // PARSERHEADER_H_INCLUDED
