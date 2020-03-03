#ifndef BINARYTREE_H
#define BINARYTREE_H


#include "node.h"
#include <bits/stdc++.h>
#include <vector>


class btree{
public:
	btree();
	~btree();

	void insert(int key);
	node* search(int key);
	void destroy_tree();
    bool value(node* actual, std::vector<bool> valuesForVariables);
    void all(node* actual,std::vector<char>&letras);
	node *root;
    std::bitset<27>alf;

private:
    bool evaluate(node* actual);
	void destroy_tree(node *leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);
    bool conditional(bool a, bool b);
    bool Union(bool pre, bool post, char simbolo);

};

#endif
