#include<bits/stdc++.h>
#include "parser.h"
#include "lexer.h"

using namespace std;

extern char token;
extern void getToken();

void syntaxError() {
   throw std::exception();
}

void match(char expectedToken) {
   if(token == expectedToken){
      getToken();
   }else{
      syntaxError();
   }
}

node* atom() {
   if(token >= 'a' && token <= 'z') {
      node* t = new node;
      t->value = token;
      match(token);
      return t;
   }else{
      syntaxError();
   }
}

node* prop() {
   node* t = new node;
   if(token == '~') {
      t->value = token;
      match('~');
      t->left = atom();
      t->right = NULL;
   }else{
     t = atom();
   }
   return t;
}

node* term() {
   node* t = prop();
   while(token == '^'){
       node* p = new node;
       p->left = t;
       p->value = token;
       t = p;
       match('^');
       t->right = prop();
   }
   return t;
}

node* exp() {
   node* t = term();
   while(token == 'V'){
       node* p = new node;
       p->left = t;
       p->value = token;
       t = p;
       match('V');
       t->right = term();
   }
   return t;
}

node* stm() {
   node* t = exp();
   while(token == '>'){
       node* p = new node;
       p->left = t;
       p->value = token;
       t = p;
       match('>');
       t->right = exp();
   }
   return t;
}

btree* parse(){
    btree* syntaxTree = new btree;
    getToken();
    syntaxTree->root = stm();
    if(token != ' '){
        syntaxError();
    }
    return syntaxTree;
}
