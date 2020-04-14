#ifndef CODEGENHEADER_H_INCLUDED
#define CODEGENHEADER_H_INCLUDED
#include <bits/stdc++.h>
#include "symbTable.h"
using namespace std;

// Define possible temporal variable types.
enum tempType{
	id,
	intConst,
	realConst,
	literalConst
};
enum booleanOperator{
	EQL,
	NEQ,
	LESS,
	GTR,
	GEQ,
	LEQ
};
string booleanOperators[] = {"BEQ","BNE","BLT","BGT","BGE","BLE"};

// Constant temporal number counter by tempType.
vector<int> countersForTempNumbers = {0, 200, 300, 400};

// Intermediate Code Instructions.
vector<string> ICStatements;

// Contains the incomplete instructions line number.
stack<int> Labels;

// Constants definition report.
vector<string> constantReport[4];

extern vector<map<string, symbTableContent>> symbTableStack;


// Generate numbers for temporal variables. From -INF to -1.
int temporalCounter = 0;
int createTemporal(){
	return -- temporalCounter;
}

int addTemporalToIdOrConst(string lexeme, int scope, tempType constType)
{
    transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);
    countersForTempNumbers[constType] ++ ;
    if(constType == tempType::id) {
        symbTableStack[scope][lexeme].tempNumber = countersForTempNumbers[constType];
    }
	constantReport[constType].push_back(lexeme + "\t\t\t" + to_string(scope) + "\t\t\t" + to_string(countersForTempNumbers[constType]));
	return countersForTempNumbers[constType];
}

// Given the quadruple values, create the IC instruction and adds it to to list of intermediate code statements.
// returns the 1-based line number of the added IC statement.
int addICStatement(string op, int a, int b, int result){
	string statement = op + " " + to_string(a) + " " + to_string(b) + " " + to_string(result);
	ICStatements.push_back(statement);
	return ICStatements.size();
}

// Given a boolean operator enum type, returns its string name.
string getBooleanOperatorLexeme(booleanOperator operation){
	return booleanOperators[operation];
}
// Given a boolean operator, returns its opposite operator.
// Example Case: given EQL returns NEQ.
booleanOperator negateBooleanOperator(booleanOperator operation){
	switch(operation){
		case booleanOperator::EQL:
			return booleanOperator::NEQ;

		case booleanOperator::NEQ:
			return booleanOperator::EQL;

		case booleanOperator::GEQ:
			return booleanOperator::LESS;

		case booleanOperator::LESS:
			return booleanOperator::GEQ;

		case booleanOperator::LEQ:
			return booleanOperator::GTR;

		case booleanOperator::GTR:
			return booleanOperator::LEQ;
	}
}

// Given the jump line for an incomplete statement, this function
// updates the ICStatements's statement in the position indicated by the
// top number in the Labels stack.
void updateInstructionJumpLine(int jumpLineNumber) {
    if(!Labels.empty()) {
        int instructionPos = Labels.top();
        Labels.pop();
        if(instructionPos < ICStatements.size()) {
            // the instruction will have 0 in the place of the jumpLineNumber
            ICStatements[instructionPos].pop_back();
            ICStatements[instructionPos] += to_string(jumpLineNumber);
        }
    }
}

#endif // CODEGENHEADER_H_INCLUDED
