#pragma once
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;

//template<class T>

class Node
{
private:
	string Name, Gender, Program, School, cellNumber, Email, Address;
	double Id;
	Node *next;
	Node *prev;
	Node *left;
	Node *right;
public:
	Node();
	Node(double, string, string, string, string, string, string, string);
	double get_Id();
	void set_Id(double);
	string get_Name();
	string get_Gender();
	string get_Program();
	string get_School();
	string get_Number();
	string get_Email();
	string get_Address();
	void set_next(Node* n);
	Node* get_next();
	void set_Prev(Node* p);
	Node *get_Prev();
	void set_Left(Node*);
	Node *get_Left();
	void set_Right(Node*);
	Node *get_Right();


};

