#ifndef PARSERHEADER_H_INCLUDED
#define PARSERHEADER_H_INCLUDED
#include<bits/stdc++.h>
#include"symbTable.h"
using namespace std;


/**

TODO: funcion que genere un numero para constantes
id 0 - 200
int 200 - 300
real 300 - 400
literal 400 - 500

TODO: funcion que genere numero de variables temporales.
de -infinito a -1 inclusive

TODO: asociar un ID/constante con su numero de temporal.
**/

//Estructura para guardar las constantes
map<string,int>constTable[5];

//Contador de las constantes divididas por tipos
vector<int>contadores(5,0);

int offset[] = { 0, 200, 300,400};

int addconst(string lexem, type tipo)
{
    if(constTable[tipo].count(lexem))
    {
        return constTable[tipo][lexem];
    }
    constTable[tipo][lexem] = ++contadores[tipo];
    return contadores[tipo];
}

int temp = 0;
int addTemp(){
	return --temp;
}

#endif // PARSERHEADER_H_INCLUDED
