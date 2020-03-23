#include "IRcode.hpp"

using namespace std;

tableVal addconst(string lexem, type tipo)
{
    tableVal newEntry;
    if(constTable.count(lexem))
    {
        return constTable[lexem];
    }
    switch(tipo)
    {
        case 1:
            newEntry.temporal = intCounter;
            intCounter++;
            break;
        case 2:
            newEntry.temporal = realCounter;
            realCounter++;
            break;
        case 3:
            newEntry.temporal = stringCounter;
            stringCounter++;
            break;
        case 4:
            newEntry.temporal = procedureCounter;
            procedureCounter++;
            break;
    }
    newEntry.tipo = tipo;
    constTable[lexem] = newEntry;
    return newEntry;
}
