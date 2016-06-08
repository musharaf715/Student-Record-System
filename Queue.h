//**************QUEUE****************//
#include "linklist.h"

class Queue
{
	Linklist st;
	int count;
public:
	Queue();
	void enqueue();
	void de_queue();
	void display();
	int size();
	/*void isFull();
	void isEmpty();*/
	void delete_Queue();
	void Search(double key);
	void DeQueue_List();
	~Queue();



};

