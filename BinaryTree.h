#pragma once

#include <iostream>
#include <conio.h>
#include <string>
#include "node.h"
using namespace std;

class tree
{
private:
	Node* root; 
public:
	
	void set_Root(Node *); 
	Node *get_Root();
	tree(); 
	void removeAll(Node* tree);
	~tree();
	void Insert_Node();
	void inorder(Node *);
	void findNodebyvalue(double key);
	Node* findparentforNode(double key);	
	Node* Delete_Node(double);	
	void traverse();
};