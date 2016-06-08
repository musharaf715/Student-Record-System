
//#include "d_linklist.h"
#include "node.h"
#include "linklist.h"
class DoublyLinklist
{
private:
	Node *head;
	Node *tail;
	Linklist s;
public:
	void set_h(Node *h);
	Node* get_h();
	void set_Tail(Node *t);
	Node* get_Tail();
	DoublyLinklist();
	~DoublyLinklist();
	//*************************INSERTION****************************//
	void Insert_At_head();
	void Insert_At_End(int d);
	void Find_Id(double key);
	Node *search(double);
	void Insert_At_After(int val, int key);
	void Insert_At_Before(int val, int key);
	//*************************DELETION****************************//
	void delete_At_head();
	void delete_At_Tail();
	void d_Delete_N_Key(double key);
	void delete_List();
	//***********************PRT************************//
	void Print_Doubly_List();


};
