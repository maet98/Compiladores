#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <strings.h>
#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <regex>
#include <list>
#include "lexer.h"

using namespace std;

int nextToken = 0;
string inputSplitted;
char token;

void getToken(){
    if(nextToken >= inputSplitted.size()){
        token = ' ';
    }else{
        token = inputSplitted[nextToken];
        nextToken ++;
    }
}

void split(string input)
{
    for (char x : input)
    {
        if (x != ' ')
        {
            inputSplitted.push_back(x);
        }
    }
}

bool lexer()
{
    map<char, int> mapper;
    mapper['~'] = negacion;
    mapper['^'] = conjuncion;
    mapper['>'] = implicacion;
    mapper['V'] = disyuncion;
    int cntValidTokens = 0; /* the empty string is not a valid token */
    for (int i = 0; i < inputSplitted.size(); ++i)
    {
        if(mapper.count(inputSplitted[i])||getAtomLabel(inputSplitted[i])){ cntValidTokens ++; continue; }
        return false;
    }
    if(cntValidTokens == 0){
        return false;
    }
    return true;
}

bool getAtomLabel(char inputSplittedToken){
    if(inputSplittedToken >='a' && inputSplittedToken <= 'z')
        return true;
    else
        return false;
}
