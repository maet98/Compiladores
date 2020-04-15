#ifndef CODEGENHEADER_H_INCLUDED
#define CODEGENHEADER_H_INCLUDED
#include <bits/stdc++.h>
#include "symbTable.h"
using namespace std;

// Define possible temporal variable types.
enum tempType {
	id,
	intConst,
	realConst,
	literalConst
};

enum quadrupleOperator {
    BUNC,
    CALL,
    PLUS,
    SUB,
    MULT,
    DIV,
    BEQ,
    BLT,
    BGT,
    BGE,
    BLE,
    BNE,
    ASSGN,
    READ,
    WRITE,
    HALT,
};

struct quadruple {
    quadrupleOperator operatorCode;
    int fstOperand;
    int sndOperand;
    int trdOperand;
    quadruple(quadrupleOperator _operatorCode,
              int _fstOperand,
              int _sndOperand,
              int _trdOperand) : operatorCode(_operatorCode), fstOperand(_fstOperand), sndOperand(_sndOperand), trdOperand(_trdOperand) {}
};

map<int, string> quadrupleOperatorName = {
    { quadrupleOperator::BUNC, "BUNC"},
    { quadrupleOperator::CALL, "CALL"},
    { quadrupleOperator::PLUS, "PLUS"},
    { quadrupleOperator::SUB, "SUB"},
    { quadrupleOperator::MULT, "MULT"},
    { quadrupleOperator::DIV, "DIV"},
    { quadrupleOperator::BEQ, "BEQ"},
    { quadrupleOperator::BLT, "BLT"},
    { quadrupleOperator::BGT, "BGT"},
    { quadrupleOperator::BGE, "BGE"},
    { quadrupleOperator::BLE, "BLE"},
    { quadrupleOperator::BNE, "BNE"},
    { quadrupleOperator::ASSGN, "ASSGN"},
    { quadrupleOperator::READ, "READ"},
    { quadrupleOperator::WRITE, "WRITE"},
    { quadrupleOperator::HALT, "HALT"},
};

// Constant temporal number counter by tempType.
vector<int> countersForTempNumbers = {0, 200, 300, 400};

// Intermediate Code Instructions.
vector<quadruple> ICStatements;

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
    countersForTempNumbers[constType] ++ ;
    if(constType == tempType::id) {
        transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);
        symbTableStack[scope][lexeme].tempNumber = countersForTempNumbers[constType];
    }
	constantReport[constType].push_back(lexeme + "\t\t\t" + to_string(scope) + "\t\t\t" + to_string(countersForTempNumbers[constType]));
	return countersForTempNumbers[constType];
}

// Given the quadruple values, create the IC instruction and adds it to to list of intermediate code statements.
// returns the 1-based line number of the added IC statement.
int addICStatement(quadrupleOperator operatorCodeLocal, int fstOperandLocal, int sndOperandLocal, int trdOperandLocal){
	quadruple statement(operatorCodeLocal, fstOperandLocal, sndOperandLocal, trdOperandLocal);
	ICStatements.push_back(statement);
	return ICStatements.size();
}

// Given a boolean operator, returns its opposite operator.
// Example Case: given EQL returns NEQ.
quadrupleOperator negateBooleanOperator(quadrupleOperator operation){
	switch(operation){
		case quadrupleOperator::BEQ:
			return quadrupleOperator::BNE;

		case quadrupleOperator::BNE:
			return quadrupleOperator::BEQ;

		case quadrupleOperator::BGE:
			return quadrupleOperator::BLT;

		case quadrupleOperator::BLT:
			return quadrupleOperator::BGE;

		case quadrupleOperator::BLE:
			return quadrupleOperator::BGT;

		case quadrupleOperator::BGT:
			return quadrupleOperator::BLE;
        default:
            return operation;
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
            // the instruction will have trdOperand = 0
            ICStatements[instructionPos].trdOperand = jumpLineNumber;
        }
    }
}

void printICStatements() {
    for(int i = 0; i < ICStatements.size(); i++) {
        cout << i + 1 << " " << quadrupleOperatorName[ICStatements[i].operatorCode] << " " << to_string(ICStatements[i].fstOperand) << " " << to_string(ICStatements[i].sndOperand) << " " << to_string(ICStatements[i].trdOperand) << endl;
    }
}

#endif // CODEGENHEADER_H_INCLUDED
