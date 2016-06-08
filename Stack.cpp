//**************STACK****************//
#include "Stack.h"

 
Stack::Stack()
{
	count = 0;
}

 
void Stack::push()
{
	st.Insert();
	count++;
}


 
void Stack::pop()
{
	if (count != 0)
	{
		st.delete_At_head();
		count--;
	}
	else
	{
		cout << "Stack is Empty !" << endl;
	}
}

void Stack::Search(double key)
{
	if (count != 0)
	{
		st.Find(key);
	}
	else
	{
		cout << "\nStack is Empty !\n" << endl;
	}
}
void Stack::display()
{
	if (count != 0 )
	{
		st.PrintList();
	}
	else
	{
		cout << "Stack is Empty !" << endl;
	}
	
}

void Stack::Del_List()
{
	if (count != 0)
	{
		st.delete_List();
		count = 0;
	}
	else
	{
		cout << "Stack is Empty !" << endl;
	}
}
int Stack::size()
{
	return count;
}

 
void Stack::isFull()
{
	if (count == 100)
		cout << "Stack is Full h!" << endl;
	else
	{
		cout << "Not Full !" << endl;
	}
}

 
bool Stack::isEmpty()
{
	if (st.get_h() == NULL)
		return true;
	else
		return false;
}

 
Stack::~Stack() {}





