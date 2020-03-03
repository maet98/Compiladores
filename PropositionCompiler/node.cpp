#include "node.h"

node* node::insertRight(char key){
    if(right == NULL){
        right = new node;
        right->value = key;
    }
    else{
        right->value = key;
    }
    return right;
}

node* node::insertLeft(char key){
    if(left == NULL){
        left = new node;
        left->value = key;
    }
    else{
        left->value = key;
    }
    return left;
}
