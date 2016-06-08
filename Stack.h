//**************STACK****************//
#include "linklist.h"

class Stack
{
	Linklist st;
	int count;
public:
	Stack();
	void push();

	void pop();
	void display();
	void Search(double key);
	int size();
	void Del_List();
	void isFull();

	bool isEmpty();
	~Stack();



};

