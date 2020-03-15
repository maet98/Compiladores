#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include "lexer.h"
#include "node.h"
#include "BinaryTree.h"
#include "parser.h"

using namespace std;

void allPossibleTruthValues(btree*);
void inputTruthValue(btree*);

void inputTruthValue(btree* syntaxTree){
    vector<char> characters;
    syntaxTree->all(syntaxTree->root, characters);
    cout << "Ingrese los valores de verdad para las variables: " << endl;
    vector<bool> truthValues(28);
    for(int i = 0; i < characters.size(); i++){
        cout << characters[i] << " : ";
        bool truthValue;
        cin >> truthValue;
        truthValues[characters[i] - 'a'] = truthValue;
    }
    cout << "El resultado de evaluar la expresion es: ";
    cout << syntaxTree->value(syntaxTree->root, truthValues) << endl << endl;
}

void allPossibleTruthValues(btree* syntaxTree){
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Resultados para todos los posibles valores de verdad de las variables: " << endl;
    vector<char> characters;
    syntaxTree->all(syntaxTree->root,characters);
    for(int x = 0; x < pow(2, characters.size()); x++){
       cout << endl;
       vector<bool> truthValues(28, 0);
       for(int i = 0; i < characters.size(); i++){
           truthValues[characters[i] - 'a'] = (x & (1<<i));
           cout << characters[i] << " : " << truthValues[characters[i] - 'a'] << endl;
       }
       cout << "El resultado de evaluar la expresion es: ";
       cout << syntaxTree->value(syntaxTree->root, truthValues) << endl;
   }
}

int main()
{
    string input;
    getline(cin, input);
    split(input);
    if(!lexer()){
        cout << "Ocurrio un Error lexico" << endl;
        return EXIT_FAILURE;
    }
    btree* syntaxTree;
    try
    {
        syntaxTree = parse();
    }
    catch(const std::exception&)
    {
        cout << "Ocurrio un Error Sintáctico" << endl;
        return EXIT_FAILURE;
    }
    inputTruthValue(syntaxTree);
    allPossibleTruthValues(syntaxTree);
    syntaxTree->destroy_tree();
    return 0;
}
