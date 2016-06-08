//**************QUEUE****************//
#include "Queue.h"

 
Queue::Queue()
{
	count = 0;
}

 
void Queue::enqueue()
{
	st.Insert();
	count++;
}

 
void Queue::de_queue()
{
	if (count != 0)
	{
		st.delete_At_Tail();
		count--;
	}
	else
	{
		cout << "Queue is Empty !" << endl;
	}
}

 
void Queue::display()
{
	if (count != 0)
	{
		st.PrintList();
	}
	else
	{
		cout << "Queue is Empty !" << endl;
	}
}
void Queue::Search(double key)
{
	if (count != 0)
	{

		st.Find(key);
	}
	else
	{
		cout << "Queue is Empty !" << endl;
	}
}
void Queue::DeQueue_List()
{
	if (count != 0)
	{
		st.delete_List();
		count = 0;
	}
	else
	{
		cout << "Queue is Empty !" << endl;
	}
}
int Queue::size()
{
	return count;
}


 
//void Queue::isFull()
//{
//	if (count == 100)
//		cout << "Queue is Full !" << endl;
//	else
//	{
//		cout << "Not Full !" << endl;
//	}
//}
//
// 
//void Queue::isEmpty()
//{
//	if (st.get_h() == NULL)
//		cout << "Queue is Empty !" << endl;
//	else
//	{
//		cout << "Not Empty !" << endl;
//	}
//}
void Queue::delete_Queue()
{
	st.delete_List();
}
 
Queue::~Queue() {}
