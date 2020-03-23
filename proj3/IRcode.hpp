#ifndef IRCODE_H_INCLUDED
#define IRCODE_H_INCLUDED
#include <map>
#include <stdio.h>
#include <string>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

enum type{
    noType = 0,
    integer = 1,
    real = 2,
    stringType = 3,
    procedure = 4,
};
enum boolean_op{
    eql = 1,
    les = 2,
    gtr = 3,
    leq = 4,
    geq = 5,
    neq = 6,
};
struct tableVal{
    int temporal;
    type tipo;
};

const int TEMPINIT = 500;

int idCounter = 0;
int intCounter = 200;
int realCounter = 300;
int stringCounter = 400;
int tempCounter = TEMPINIT;
vector<string> instr;
map<string, tableVal> intTable;
map<string, tableVal> realTable;
map<string, tableVal> stringTable;
map<string, tableVal> tempTable;

string intReport = "integer Report\nEntry#\t\tvalor\t\ttipo\n";
string realReport = "real Report\nEntry#\t\tvalor\t\ttipo\n";
string stringReport = "string Report\nEntry#\t\tvalor\t\ttipo\n";

tableVal addconst(string lexem, type tipo)
{
    tableVal newEntry;
    newEntry.tipo = tipo;
    switch(tipo)
    {
        case 1:
            if(intTable.count(lexem))
            {
                return intTable[lexem];
            }
            newEntry.temporal = intCounter;
            intTable[lexem] = newEntry;
            intReport += to_string(newEntry.temporal) + "\t\t" + lexem + "\t\t" + "integer" + "\n";
            intCounter++;
            break;
        case 2:

            if(realTable.count(lexem))
            {
                return realTable[lexem];
            }
            newEntry.temporal = realCounter;
            realTable[lexem] = newEntry;
            realReport += to_string(newEntry.temporal) + "\t\t" + lexem + "\t\t" + "real" + "\n";
            realCounter++;
            break;
        case 3:
            if(stringTable.count(lexem))
            {
                return stringTable[lexem];
            }
            newEntry.temporal = stringCounter;
            stringTable[lexem] = newEntry;
            stringReport += to_string(newEntry.temporal) + "\t\t" + lexem + "\t\t" + "string" + "\n";
            stringCounter++;
            break;
    }
    return newEntry;
}

tableVal addTemp(type tipo)
{
    tableVal newEntry;
    string lexem = 't' + to_string(TEMPINIT - tempCounter);
    newEntry.tipo = tipo;
    newEntry.temporal = tempCounter;
    tempTable[lexem] = newEntry;
    tempCounter++;
    return newEntry;
}

tableVal sum(tableVal leftOp, tableVal rightOp, type tipo)
{
    string newInst = "PLUS ";
    tableVal resTemp = addTemp(tipo);
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " " + to_string(resTemp.temporal);
    instr.push_back(newInst);
    return resTemp;
}
tableVal sub(tableVal leftOp, tableVal rightOp, type tipo)
{
    string newInst = "SUB ";
    tableVal resTemp = addTemp(tipo);
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " " + to_string(resTemp.temporal);
    instr.push_back(newInst);
    return resTemp;
}
tableVal mult(tableVal leftOp, tableVal rightOp, type tipo)
{
    string newInst = "MULT ";
    tableVal resTemp = addTemp(tipo);
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " " + to_string(resTemp.temporal);
    instr.push_back(newInst);
    return resTemp;
}
tableVal div(tableVal leftOp, tableVal rightOp, type tipo)
{
    string newInst = "DIV ";
    tableVal resTemp = addTemp(tipo);
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " " + to_string(resTemp.temporal);
    instr.push_back(newInst);
    return resTemp;
}
void assgn(tableVal source, tableVal sink)
{
    string newInst = "ASSGN ";
    newInst += to_string(source.temporal) + " 0 " + to_string(sink.temporal);
    instr.push_back(newInst);
}
void write(tableVal op)
{
    string newInst = "WRITE ";
    newInst += to_string(op.temporal) + " 0 0" ;
    instr.push_back(newInst);
}
void read(tableVal op)
{
    string newInst = "READ ";
    newInst += "0 0 " + to_string(op.temporal);
    instr.push_back(newInst);
}
int bunc()
{
    string newInst = "BUNC ";
    newInst += "0 0 ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int beq(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BEQ ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int blt(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BLT ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int bgt(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BGT ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int bge(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BGE ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int ble(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BLE ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

int bne(tableVal leftOp, tableVal rightOp)
{
    string newInst = "BNE ";
    newInst += to_string(leftOp.temporal) + " " + to_string(rightOp.temporal) + " ";
    instr.push_back(newInst);
    return instr.size() - 1;
}

void increment(tableVal sink)
{
    tableVal one = addconst("1", type::integer);
    string newInst = "PLUS ";
    newInst += to_string(one.temporal) + " " + to_string(sink.temporal) + " " + to_string(sink.temporal);
    instr.push_back(newInst);
}

int jumpSelector(boolean_op op, tableVal leftOp, tableVal rightOp)
{
    int result;
    switch(op)
    {
        case boolean_op::eql:
            result = beq(leftOp, rightOp);
            break;
        case boolean_op::les:
            result = blt(leftOp, rightOp);
            break;
        case boolean_op::gtr:
            result = bgt(leftOp, rightOp);
            break;
        case boolean_op::geq:
            result = bge(leftOp, rightOp);
            break;
        case boolean_op::leq:
            result = ble(leftOp, rightOp);
            break;
        case boolean_op::neq:
            result = bne(leftOp, rightOp);
            break;
    }
    return result;
}

void completeJump(int target)
{
    instr[target] += to_string((int)instr.size() + 1);
}

void completeCicle(int start)
{
    instr[bunc()] += to_string(start + 1);
}

void completeUntil(int line, int start)
{
    instr[start] += to_string(line + 1);
}

#endif // IRCODE_H_INCLUDED
