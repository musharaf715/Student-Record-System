#include "Node.h"
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;



//template<class T>
Node::Node()
{
	//Name = NULL;
	Id = 0;
	next = NULL;
	prev = NULL;
	left = NULL;
	right = NULL;

}
void Node::set_Left(Node* n)
{

	left = n;
}

//template<class T>
Node* Node::get_Left()
{
	return left;
}
void Node::set_Right(Node* n)
{

	right = n;
}

//template<class T>
Node* Node::get_Right()
{
	return right;
}
Node::Node(double id, string n, string g, string p, string s, string num, string e, string add)
{
	Id = id;
	Name = n;
	Gender = g;
	Program = p;
	School = s;
	cellNumber = num;
	Email = e;
	Address = add; 	
}
//template<class T>

//template<class T>
void Node::set_Id(double d)
{

	Id = d;
}
double Node::get_Id()
{
	return Id;
}
//
//template<class T>
string Node::get_Name()
{
	return Name;
}
//
//void Node::set_Gender(string g)
//{
//
//	Gender = g;
//}
//
//template<class T>
string Node::get_Gender()
{
	return Gender;
}
//void Node::set_Program(string d)
//{
//
//	Program = d;
//}
//
//template<class T>
string Node::get_Program()
{
	return Program;
}
//void Node::set_School(string d)
//{
//
//	School = d;
//}
//
////template<class T>
string Node::get_School()
{
	return School;
}
//void Node::set_Number(string d)
//{
//
//	cellNumber = d;
//}
//
//template<class T>
string Node::get_Number()
{
	return cellNumber;
}
//void Node::set_Email(string d)
//{
//
//	Email = d;
//}
//
//template<class T>
string Node::get_Email()
{
	return Email;
}
//
//void Node::set_Address(string d)
//{
//
//	Address = d;
//}
//
//template<class T>
string Node::get_Address()
{
	return Address;
}

//template<class T>
void Node::set_next(Node* n)
{

	next = n;
}

//template<class T>
Node* Node::get_next()
{
	return next;
}

void Node::set_Prev(Node* p)
{

	prev = p;
}


Node* Node::get_Prev()
{
	return prev;
}



//template class Node<int>;