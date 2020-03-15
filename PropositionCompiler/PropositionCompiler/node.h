#ifndef NODE_H
#define NODE_H
#include <cstddef>

struct node{
	char value;
	node *left;
	node *right;

    node* insertLeft(char key);
    node* insertRight(char key);
};

#endif
