#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <strings.h>
#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <list>

enum simbol
{
    negacion,
    conjuncion,
    implicacion,
    disyuncion
};

using namespace std;

void split(string);
bool lexer();
bool getAtomLabel(char);

extern char token; /* current token */
void getToken(); /* update token to the next token */

#endif
