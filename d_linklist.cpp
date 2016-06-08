
#include "d_linklist.h"


 
void DoublyLinklist::set_h(Node *h)
{
	head = h;
}

 
Node* DoublyLinklist::get_h()
{
	return head;
}
 
void DoublyLinklist::set_Tail(Node *t)
{
	tail = t;
}

 
Node* DoublyLinklist::get_Tail()
{
	return tail;
}

 
DoublyLinklist::DoublyLinklist()
{
	head = new Node;
	tail = new Node;
	//head->set_Data(0);
	//tail->set_Data(0);
	head->set_next(tail);
	head->set_Prev(NULL);
	tail->set_Prev(head);
	tail->set_next(NULL);

}


 
DoublyLinklist::~DoublyLinklist()
{

}

//*************************INSERTION****************************//

 
void DoublyLinklist::Insert_At_head()
{
	// Node *ptr = new Node(val);
	string n, g, p, s, num, email, add;
	double id;
	if (head->get_next() != NULL)
	{

		cout << "\n# Student Id:";
		cin >> id;
		cin.ignore();
		cout << "\n# Name :";
		getline(cin, n);

		cout << "\n# Gender :";
		getline(cin, g);

		cout << "\n# Program :";
		getline(cin, p);

		cout << "\n# School :";
		getline(cin, s);

		cout << "\n# Cell-Number :";
		getline(cin, num);

		cout << "\n# E-mail :";
		getline(cin, email);

		cout << "\n# Address :";
		getline(cin, add);
		Node* ptr = new Node(id, n, g, p, s, num, email, add);
		ptr->set_next(head->get_next());
		ptr->set_Prev(head->get_next()->get_Prev());
		head->get_next()->set_Prev(ptr);
		head->set_next(ptr);
	}
	else
	{
		cout << "\n# Student Id:";
		cin >> id;
		cin.ignore();
		cout << "\n# Name :";
		getline(cin, n);

		cout << "\n# Gender :";
		getline(cin, g);

		cout << "\n# Program :";
		getline(cin, p);

		cout << "\n# School :";
		getline(cin, s);

		cout << "\n# Cell-Number :";
		getline(cin, num);

		cout << "\n# E-mail :";
		getline(cin, email);

		cout << "\n# Address :";
		getline(cin, add);
		Node* ptr = new Node(id, n, g, p, s, num, email, add);
		ptr->set_Prev(head);
		ptr->set_next(tail);

		tail->set_Prev(ptr);
		head->set_next(ptr);
	}
}


 
//void DoublyLinklist::Insert_At_End(int val)
//{
//	Node* ptr = new Node(val);
//	//ptr->set_Data(val);
//	if (head->get_next() != tail)
//	{
//		ptr->set_next(tail);
//		ptr->set_Prev(tail->get_Prev());
//		tail->get_Prev()->set_next(ptr);
//		tail->set_Prev(ptr);
//	}
//	else
//	{
//		Insert_At_head(val);
//	}
//}

Node *DoublyLinklist::search(double key)                                      //Search Func.
{

	Node *temp = head;
	while (temp != tail)
	{
		if (temp->get_Id() == key)
		{
			return temp;
		}
		else
			temp = temp->get_next();
	}
	return NULL;
}
void DoublyLinklist::Find_Id(double key)                                      //Search Func.
{
	Node *temp = search(key);
	if (temp != NULL && temp != tail)
	{
		cout << "RECORD # " << temp->get_Id() << endl;
		Sleep(1000);
		cout << "_____________________________________" << endl;
		Sleep(1000);
		cout << "\n# Name :" << temp->get_Name() << endl; Sleep(500);
		cout << "\n# Gender :" << temp->get_Gender() << endl; Sleep(500);
		cout << "\n# Program :" << temp->get_Program() << endl; Sleep(1000);
		cout << "\n# School :" << temp->get_School() << endl; Sleep(500);
		cout << "\n# Cell-Number :" << temp->get_Number() << endl; Sleep(500);
		cout << "\n# E-mail :" << temp->get_Email() << endl; Sleep(500);
		cout << "\n# Address :" << temp->get_Address() << endl; Sleep(500);
		cout << "____________________________________\n\n" << endl; Sleep(500);
	}
	else
	{
		cout << "Invalid ID" << endl;
		Sleep(500);

	}
}

 
//void DoublyLinklist::Insert_At_After(int val, int key)
//{
//	Node* temp = search(key);
//	if (temp != NULL)
//	{
//		Node* ptr = new Node;
//		ptr->set_Data(val);
//		ptr->set_next(temp->get_next());
//		ptr->set_Prev(temp);
//		temp->get_next()->set_Prev(ptr);
//		temp->set_next(ptr);
//	}
//	else
//	{
//		cout << "Key not found !" << endl;
//	}
//}

 
//void DoublyLinklist::Insert_At_Before(int val, int key)
//{
//	Node* temp = search(key);
//	if (temp != NULL)
//	{
//		Node* ptr = new Node;
//		ptr->set_Data(val);
//		ptr->set_next(temp);
//		ptr->set_Prev(temp->get_Prev());
//		temp->set_Prev(ptr);
//		ptr->get_Prev()->set_next(ptr);
//	}
//	else
//	{
//		cout << "Key not found !" << endl;
//	}
//}



//*************************DELETION****************************//

 
void DoublyLinklist::delete_At_head()
{
	if (head->get_next() != tail)
	{
		Node *temp = head->get_next();
		head->set_next(temp->get_next());
		temp->get_next()->set_Prev(head);
		delete temp;
		cout << "Deleting..";
		Sleep(1000);
		cout << "...";
		Sleep(1000);
		cout << "..";
		Sleep(500);
		cout << "...";
		Sleep(1000);
		cout << "..";

		cout << "Record  Deleted ! " << endl;
	}
	else
	{
		cout << "List already Empty ! " << endl;
		Sleep(1000);
	}

}


void DoublyLinklist::d_Delete_N_Key(double key)
{
	if (head->get_next() != tail)
	{
		Node *temp = search(key);
		if (temp == NULL)
		{
			cout << "Record Not Found " << endl;
		}
		else if (temp != NULL)
		{
			
		 if (temp->get_next() == tail)
			{//Node *temp = head->get_next();
				temp->get_Prev()->set_next(tail);
				tail->set_Prev(temp->get_Prev());
				delete temp;
				cout << "Deleting..";
				Sleep(1000);
				cout << "...";
				Sleep(1000);
				cout << "..";
				Sleep(500);
				cout << "...";
				Sleep(1000);
				cout << "..";

				cout << "Record# " << key << " Deleted ! " << endl;
			}
			else
			{
				temp->get_Prev()->set_next(temp->get_next());
				temp->get_next()->set_Prev(temp->get_Prev());
				delete temp;
				cout << "Deleting..";
				Sleep(1000);
				cout << "...";
				Sleep(1000);
				cout << "..";
				Sleep(500);
				cout << "...";
				Sleep(1000);
				cout << "..";

				cout << "Record# " << key << " Deleted ! " << endl;
			}
		}
		else
		{
			cout << "List already Empty ! " << endl;
			Sleep(1000);
		}

	}
	/*else
	{
		Sleep(1000);
		
	}*/
}
 
//void DoublyLinklist::delete_At_Tail()
//{
//
//	if (head->get_next() != tail)
//	{
//		Node* temp = tail->get_Prev();
//		temp->get_Prev()->set_next(tail);
//		tail->set_Prev(temp->get_Prev());
//		delete temp;
//	}
//	else
//	{
//		cout << "List already Empty ! " << endl;
//	}
//
//
//}

 
void DoublyLinklist::delete_List()
{
	if (head->get_next() != NULL)
	{
		cout << "\n\nDeleting......... \n\n" << endl;
		while (head->get_next() != tail)
		{
			delete_At_head();
		}
		cout << "\n\nList has been Deleted  ! \n\n" << endl;
	}
	else
	{
		cout << "\n\nList is Empty  ! \n\n" << endl;
	}
}

//***********************PRT************************//
 
void DoublyLinklist::Print_Doubly_List()
{
	system("cls");
	
	if (head->get_next() != NULL)
	{
		Node *temp = head->get_next();
		
		int i = 0;
		while (temp != tail)
		{
			cout << "RECORD # " << ++i << endl;
			//Sleep(1000);
			cout << "_____________________________________" << endl;
			//Sleep(1000);
			cout << "\n# Student Id:" << temp->get_Id() << endl;
			//Sleep(1000);
			cout << "\n# Name :" << temp->get_Name() << endl;// Sleep(500);
			cout << "\n# Gender :" << temp->get_Gender() << endl;// Sleep(500);
			cout << "\n# Program :" << temp->get_Program() << endl;// Sleep(1000);
			cout << "\n# School :" << temp->get_School() << endl; //Sleep(500);
			cout << "\n# Cell-Number :" << temp->get_Number() << endl;// Sleep(500);
			cout << "\n# E-mail :" << temp->get_Email() << endl; //Sleep(500);
			cout << "\n# Address :" << temp->get_Address() << endl; //Sleep(500);
			cout << "____________________________________\n\n" << endl;// Sleep(500);
			temp = temp->get_next();

		}
		cout<< "\n****************************************\n" << endl;
	}
	else if (head == NULL)
	{
		cout << "\n\nList is Empty !\n\n" << endl;
	}
}


