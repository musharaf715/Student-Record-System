#include "Linklist.h"

//template<class T>
void Linklist::set_h(Node *h)
{
	head = h;
}

//template<class T>
Node* Linklist::get_h()
{
	return head;
}

//template<class T>
Linklist::Linklist()
{
	head = NULL;
}

//template<class T>
Linklist::~Linklist()
{

}

//*************************INSERTION****************************//

//template<class T>
void Linklist::Insert()
{
	string n, g, p, s, num, email, add;
	double id;
	if (head != NULL)
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
		ptr->set_next(head);
		head = ptr;
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

		head = ptr;
		ptr->set_next(NULL);
	}
}


//Node *Linklist::search(int key)                                      //Search Func.
//{
//
//	Node *temp = head;
//	while (temp->get_next() != NULL)
//	{
//		if (temp->get_Id() == key)
//		{
//			return temp;
//			break;
//		}
//		else
//			temp = temp->get_next();
//	}
//	return NULL;
//}
void Linklist::Find(double key)
{
	bool flag = false;
	Node *temp = head;
	while (temp != NULL)
	{
		if (temp->get_Id() == key)
		{
			flag = true;
			break;
		}
		else
			temp = temp->get_next();
	}
	if (flag == true)
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

void Linklist::delete_At_head()
{
	Node *temp = head;
			if (temp != NULL)
			{
				cout << "Deleting..";
				Sleep(1000);
				cout << "...";
				Sleep(1000);
				cout << "..";
				Sleep(500);
				cout << "...";
				Sleep(1000);
				cout << "..";
				if(temp->get_next() != NULL) 
				{
					head = temp->get_next();
					delete temp;
					
					cout << "Record has been Deleted ! " << endl;
				}
				else
				{
					delete temp;
					head = NULL;
					cout << "Record ha Deleted ! " << endl;
					Sleep(1000);
				}
			}
			else
			{
				cout << "List is Empty ! " << endl;
				Sleep(1000);
			}
		
}
void Linklist::delete_At_Tail()
{

	if (head==NULL ||head->get_next() == NULL)
	{
		delete_At_head();
	}
	else
	{
		Node* temp = head->get_next();
		Node* temp2 = head;
		while (temp->get_next() != NULL)
		{
			temp = temp->get_next();
			temp2 = temp2->get_next();

		}
		delete temp;
		temp2->set_next(NULL);
	}

}

////template<class T>
//void Linklist::delete_At_Tail()
//{
//
//	if (head->get_next() == NULL)
//	{
//		delete_At_head();
//	}
//	else
//	{
//		Node<T>* temp = head->get_next();
//		Node<T>* temp2 = head;
//		while (temp->get_next() != NULL)
//		{
//			temp = temp->get_next();
//			temp2 = temp2->get_next();
//
//		}
//		delete temp;
//		temp2->set_next(NULL);
//	}
//
//}
//template<class T>
void Linklist::delete_N_Key(double Key)
{

	if (head != NULL)
	{

			if (head->get_Id() == Key)
			{
				delete_At_head();
			}
			else
			{
				Node* temp = head->get_next();
				Node* temp2 = head;
				bool flag = false;

				while (temp != NULL)
				{
					if (temp->get_Id() == Key)
					{
						flag = true;
						break;
					}
					temp = temp->get_next();
					temp2 = temp2->get_next();
				}
				if (flag == true)
				{
					cout << "Deleting..";
					Sleep(1000);
					cout << "...";
					Sleep(1000);
					cout << "..";
					Sleep(500);
					cout << "...";
					Sleep(1000);
					cout << "..";

					cout << "Record# " << Key << " Deleted ! " << endl;
					if (temp->get_next() != NULL)
					{
						temp2->set_next(temp->get_next());
						delete temp;
					}
					else
					{
						delete temp;
						temp2->set_next(NULL);
					}
				}
				else
				{
					cout << "Invalid Id !" << endl;
					Sleep(1000);
				}
			}
		}

		/*else
		{
			cout << "\nNO RECORDS !\n\n" << endl;
			system("pause");
		}*/
	
	
}
////template<class T>
void Linklist::delete_List()
{
	if (head == NULL)
	{
		cout << "\n\nList is Empty ! \n\n" << endl;
	}
	
	if (head != NULL)
	{
		cout << "\n\nDeleting......... \n\n" << endl;
		Node *temp = head;
		while (head != NULL)
		{
			temp = head->get_next();
			free(head);
			head = temp;
		}
		cout << "\n\nList has been Deleted  ! \n\n" << endl;
	}
}

void Linklist::PrintList()
{
	system("cls");
	Node* temp = head;
	if (temp != NULL)
	{
		 int i = 0;
		while (temp != NULL)
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
		cout << "\n****************************************\n" << endl;
	}
	else if(temp==NULL)
	{
		cout << "\n\nList is Empty !\n\n" << endl;	
	}
	
}

