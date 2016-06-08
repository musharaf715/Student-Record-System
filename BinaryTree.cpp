
#include "BinaryTree.h"

void tree::set_Root(Node *r)
{
	root = r;
}
Node *tree::get_Root()
{
	return root;
}
tree::tree()
{
	root = NULL; 
	
}

tree::~tree()
{
	
}


void tree::Insert_Node()
{
	string n, g, p, s, num, email, add;
	double id;
	
	Node *temp = root;
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

	while (1)
	{
		if (root == NULL)
		{
			root = ptr;
			break;
		}
		else if ((temp->get_Id() > ptr->get_Id()) && (temp->get_Left() == NULL))
		{
			temp->set_Left(ptr);
			break;
		}
		else if ((temp->get_Id() < ptr->get_Id()) && (temp->get_Right() == NULL))
		{
			temp->set_Right(ptr);
			break;
		}
		else if ((temp->get_Id() > ptr->get_Id()) && (temp->get_Left() != NULL))
		{
			temp = temp->get_Left();
		}
		else if ((temp->get_Id() < ptr->get_Id()) && (temp->get_Right() != NULL))
		{
			temp = temp->get_Right();
		}
	}


}


void tree::findNodebyvalue(double key) {
	Node* temp = root; bool found = false;
		while (temp != NULL)
		{
			if (temp->get_Id() == key)
			{
				found = true;
				break;
			}
			else if (key < temp->get_Id())
			{
				temp = temp->get_Left();
			}
			else
			{
				temp = temp->get_Right();
			}
		}
	
	if (found==true)
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
		cout << "\n\nNot Found !" << endl;
		Sleep(1000);
	}
	
}

Node* tree::findparentforNode(double key) {
	Node* temp = root;
	Node* temp2 = NULL;
	while ((temp != NULL) && (temp->get_Id() != key)) {
		temp2 = temp;
		if (key<temp->get_Id())temp = temp->get_Left();
		else temp = temp->get_Right();
	}
	return temp2;
}

void tree::inorder(Node *temp) {
	
	if (temp != NULL) 
	{
		inorder(temp->get_Left());
		cout << "RECORD # " << temp->get_Id() << endl;
		Sleep(1000);
		cout << "_____________________________________" << endl;
		Sleep(500);
		cout << "\n# Name :" << temp->get_Name() << endl; Sleep(50);
		cout << "\n# Gender :" << temp->get_Gender() << endl; Sleep(50);
		cout << "\n# Program :" << temp->get_Program() << endl; Sleep(100);
		cout << "\n# School :" << temp->get_School() << endl; Sleep(500);
		cout << "\n# Cell-Number :" << temp->get_Number() << endl; Sleep(50);
		cout << "\n# E-mail :" << temp->get_Email() << endl; Sleep(50);
		cout << "\n# Address :" << temp->get_Address() << endl; Sleep(500);
		cout << "____________________________________\n\n" << endl; Sleep(50);
		inorder(temp->get_Right());
	}
	
}
void tree::removeAll(Node* tree)
{
	
	  if (tree != NULL)
	{
		removeAll(tree->get_Left());
		removeAll(tree->get_Right());
		delete(tree);
		root = NULL;
		
	}
	
	
}


void tree::traverse() {
	
	 if (root != NULL)
	{
		cout << endl << "INORDER: \n\n"; Sleep(1000);
		inorder(root);
		system("pause");
	}
	else
	{
		cout << "\n\nNO RECORDS !\n" << endl;
		Sleep(1000);

	}
	
}



Node* tree::Delete_Node(double id)
{
	Node* curr;
	Node* parent = NULL;
	curr = root;
	//Locate the element
	bool found = false;
	

	 if ((id == curr->get_Id() && curr->get_Left() == NULL && curr->get_Right() == NULL))
	{
		delete curr; Sleep(1000);
		cout << "\n\nDeleted .....\n\n";
		Sleep(1000);
		root = NULL;
		return 0;
	}
	 else if (((curr->get_Id() == root->get_Id()) && (curr->get_Left() != NULL || curr->get_Right() != NULL)))
	 {
		 cout << "This is Root of Tree.\n" << endl; Sleep(1000);
		 cout << "\nCannot be Deleted......!" << endl; Sleep(1000);
		 return 0;
	 }
	 while (curr)
	{
		if (curr->get_Id() == id)
		{
			found = true;
			break;
		}
		else
		{
			parent = curr;
			/*	if (strcmp(curr->key, dkey))
					curr = curr->right;
				else
					curr = curr->left;*/
			if (id < curr->get_Id())
				curr = curr->get_Left();
			else
				curr = curr->get_Right();
		}
	}
	if (found == false)
	{
		cout << "\nData not found! \n" << endl; Sleep(1000);
		return 0;

	}


	// 3 cases :
	// 1. We're removing a leaf node
	// 2. We're removing a node with a single child
	// 3. we're removing a node with 2 children
	
	// Node with single child
	else if ((curr->get_Left() == NULL && curr->get_Right() != NULL) || (curr->get_Left() != NULL && curr->get_Right() == NULL))
	{
		if ((curr->get_Left() == NULL) && (curr->get_Right() != NULL))
		{
			if (parent->get_Left() == curr)
			{
				parent->set_Left(curr->get_Right());
				delete curr;
				Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
			}
			else
			{
				parent->set_Right(curr->get_Right());
				delete curr;
				Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
			}
		}
		else // left child present, no right child
		{
			if (parent->get_Left() == curr)
			{
				parent->set_Left(curr->get_Left());
				delete curr;
				Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
			}
			else
			{
				parent->set_Right(curr->get_Left());
				delete curr;
				Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
			}
		}
		
	}

	//We're looking at a leaf node
	else if (curr->get_Left() == NULL && curr->get_Right() == NULL)
	{
		if (parent->get_Left() == curr)//////////error///////////////////
			parent->set_Left(NULL);
		else
			parent->set_Right(NULL);
		delete curr;
		Sleep(1000);
		cout << "\n\nDeleted .....\n\n";
		Sleep(1000);
	}


	//Node with 2 children
	// replace node with smallest value in right subtree
	else if (curr->get_Left() != NULL && curr->get_Right() != NULL)
	{
		Node* chkr;
		chkr = curr->get_Right();
		if ((chkr->get_Left() == NULL) && (chkr->get_Right() == NULL))
		{
			curr = chkr;
			delete chkr; Sleep(1000);
			cout << "\n\nDeleted .....\n\n";
			Sleep(1000);
			curr->set_Right(NULL);
		}
		else // right child has children
		{
			//if the node's right child has a left child
			// Move all the way down left to locate smallest element

			if ((curr->get_Right())->get_Left() != NULL)
			{
				Node* lcurr;
				Node* lcurrp;
				lcurrp = curr->get_Right();
				lcurr = (curr->get_Right())->get_Left();
				while (lcurr->get_Left() != NULL)
				{
					lcurrp = lcurr;
					lcurr = lcurr->get_Left();
				}
				curr->set_Id(lcurr->get_Id());
				delete lcurr; Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
				lcurrp->set_Left(NULL);
			}
			else
			{
				Node* tmp;
				tmp = curr->get_Right();
				curr->set_Id(tmp->get_Id());
				curr->set_Right(tmp->get_Right());
				delete tmp; Sleep(1000);
				cout << "\n\nDeleted .....\n\n";
				Sleep(1000);
			}

		}

		
	}
	return 0;
}
