#pragma once
#include "node.h"
#include<string>
#include<Windows.h>
//template<class T>
class Linklist
{
private:
	Node *head;
public:
	void set_h(Node *h);
	Node* get_h();
	Linklist();
	~Linklist();
	//*************************INSERTION****************************//
	void Insert();
	/*void Insert_At_End(T d);*/
	//Node *search(int key);
	void Find(double key);
	
	//void Insert_At_After(T val, T key);
	//void Insert_At_Before(T val, T key);
	////*************************DELETION****************************//
	void delete_At_head();
	void delete_At_Tail();
	void delete_N_Key(double Key);
	void delete_List();
	//void delete_Largest_Val();
	////***********************PRT************************//
	void InsertNode();
	void PrintList();


};