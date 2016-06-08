#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string>
#include "linklist.h"
#include "node.h"
#include "Queue.h"
#include "Stack.h"
#include "d_linklist.h"
#include "ArrayList.h"
#include "Student.h"
#include "BinaryTree.h"


using namespace std;

void main()
{
	
	string option = "-1";
	system("color 0a");
	cout << "\n\n\n\n\n\t\t\t STUDENT RECORD SYSTEM \n\n\n" << endl;
	cout << "\t\t \xDB\xDB\xDB\xDB\xDB";
	Sleep(100);
	cout << "\xDB\xDB\xDB\xDB";
	Sleep(1000);
	cout << "\xDB\xDB\xDB";
	Sleep(1000);
	cout << "\xDB\xDB\xDB\xDB\xDB\xDB";
	Sleep(500);
	cout << "\xDB\xDB\xDB\xDB\xDB";
	Sleep(1000);
	cout << "\xDB\xDB\xDB\xDB\xDB\xDB";
	Sleep(500);
	cout << "\xDB\xDB\xDB\xDB";
	Sleep(1000);
	Sleep(500);
	cout << "\xDB\xDB\xDB\xDB\xDB";
	Sleep(5000);
	
	while (option != "0")
	{
	MainPg:
		system("CLS");
		cout << "\t\t\t************************************" << endl;
		cout << "\t\t\t    STUDENT DIRECTORY: MAIN MENU\n" << endl;
		cout << "\t\t\t************************************" << endl;
		//cout << endl;
		cout << "\n\t\t\t\t MAIN MENU \n";
		Sleep(1000);
		cout << "\t\t\t_____________";
		Sleep(50);
		cout << "_________";
		Sleep(50);
		cout << "____";
		Sleep(100);
		Sleep(50);
		cout << "___________\n";
		Sleep(100);
		cout << "\n\n1.Linklist\n" << endl;
		Sleep(50);
		cout << "2.Doubly Linklist\n" << endl;
		Sleep(50);
		cout << "3.ArrayList\n" << endl;
		Sleep(50);
		cout << "4.Queue\n" << endl;
		Sleep(100);
		cout << "5.Stack\n" << endl;
		Sleep(50);
		cout << "6.Binary Searc Tree\n" << endl;
		Sleep(50);
		cout << "0.EXIT\n" << endl;
		Sleep(100);
		cout << "#Option :: ";

		cin >> option;


		system("cls");
		if (option == "1")                           /////////////////LINKLIST//////////////
		{
			Linklist s;
			string choice = "-1";
			char ans;
			
			while (1)
			{
			loop:
				system("CLS");
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << "\t\t\t      LINKLIST DIRECTORY\n" << endl;
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << endl;
			
				cout << "\n\n1.Insert  Record\n" << endl;
				Sleep(50);
				cout << "2.Delete Specific Record\n" << endl;
				Sleep(50);
				cout << "3.Display All Records\n" << endl;
				Sleep(100);
				cout << "4.Find Specific Record\n" << endl;
				Sleep(50);
				cout << "5.Delete All Records\n" << endl;
				Sleep(50);
				cout << "0.Return to MAIN PAGE\n\n" << endl;
				Sleep(100);
				cout << "<>choice :: ";

				cin >> choice;


				system("cls");
				if (choice == "1")
				{
				again:
					s.Insert();
					cout << "\n\nDo you want to Add another Record <y/n> ?\n" << endl;
					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto again;
					}

				}
				else if (choice == "2")
				{
					system("cls");
					double key;
				DelAgain:
					if (s.get_h() != NULL)
					{
					cout << "Enter ID : ";
					cin >> key;
					s.delete_N_Key(key);
					Sleep(1000);
					
						cout << "\nDo you want to Delete other Student Record (y/n) ? ";

						cin >> ans;
						if (ans == 'y')
						{
							system("cls");
							goto DelAgain;
						}
					}
					else
					{
						cout << "\n\nNO RECORDS\n " << endl;
						Sleep(1000);
					}

				}
			

				else if (choice == "3")
				{
					system("cls");
					s.PrintList();
					system("pause");
					

				}

				else if (choice == "4")
				{
				FindAgain:
					system("cls");
					double k;
					cout << "Enter Student ID : ";
					cin >> k;
					s.Find(k);
					Sleep(1000);
					cout << "Do you want to Find other Student Record (y/n) ? ";

					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto FindAgain;
					}


				}
				else if (choice == "5")
				{
					system("cls");
					s.delete_List();
					system("pause");
					

				}
			
				else if (choice == "0")
				{
					goto MainPg;

				}
				else
				{
					cout << "\n\nInvalid Input !!\n" << endl;
					Sleep(2000);
					goto loop;

				}
			}
		}
		else if (option == "2")
		{
	
			DoublyLinklist s;
			string choice = "-1";
			char ans;

			while (1)
			{
			Doubly_loop:
				system("CLS");
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << "\t\t\t      DOUBLY LINKLIST DIRECTORY\n" << endl;
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << endl;
				
				cout << "\n\n1.Insert  Record\n" << endl;
				Sleep(50);
				cout << "2.Delete Specific Record\n" << endl;
				Sleep(50);
				cout << "3.Display All Records\n" << endl;
				Sleep(100);
				cout << "4.Find Specific Record\n" << endl;
				Sleep(50);
				cout << "5.Delete All Records\n" << endl;
				Sleep(50);
				cout << "0.Return to MAIN PAGE\n\n" << endl;
				Sleep(100);
				cout << "<>choice :: ";

				cin >> choice;


				system("cls");
				if (choice == "1")
				{
				doublyagain:
					s.Insert_At_head();
					cout << "\n\nDo you want to Add another Record <y/n> ?\n" << endl;
					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto doublyagain;
					}

				}
				else if (choice == "2")
				{
					system("cls");
					double key;
				D_DelAgain:
					if (s.get_h()->get_next() != s.get_Tail())
					{
					cout << "Enter ID : ";
					cin >> key;
					s.d_Delete_N_Key(key);
					Sleep(1000);
					
						cout << "\nDo you want to Delete other Student Record (y/n) ? ";

						cin >> ans;
						if (ans == 'y')
						{
							system("cls");
							goto D_DelAgain;
						}
					}
					else
					{
						cout << "\n\nNO RECORDS....\n " << endl;
						Sleep(1000);
					}

				}
				

				else if (choice == "3")
				{
					system("cls");
					s.Print_Doubly_List();
					system("pause");


				}

				else if (choice == "4")
				{
				DoublyFindAgain:
					system("cls");
					double k;
					cout << "Enter Student ID : ";
					cin >> k;
					s.Find_Id(k);
					Sleep(1000);
					cout << "Do you want to Find other Student Record (y/n) ? ";

					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto DoublyFindAgain;
					}


				}
				else if (choice == "5")
				{
					system("cls");
					s.delete_List();
					system("pause");


				}

				else if (choice == "0")
				{
					goto MainPg;

				}
				else
				{
					cout << "\n\nInvalid Input !!\n" << endl;
					Sleep(2000);
					goto Doubly_loop;

				}
			}

		}

		else if (option == "3")
		{
			int  SIZE, index = -1;

			char ans;
			double id;
			
			ArrayList donor(20);
			Student *d[10]; string choice = "-1";
			while (1)
			{
				system("CLS");
				cout << "************************************" << endl;
				cout << "    STUDENT DIRECTORY: MAIN MENU" << endl;
				cout << "************************************" << endl;
				cout << endl;
				cout << "1. Insert a Record" << endl << endl;
				cout << "2. Update an existing Record" << endl << endl;
				cout << "3. Delete a record" << endl << endl;
				cout << "4. Search Record (by ID)" << endl << endl;
				cout << "5. All Records" << endl << endl;
				cout << "6. Expand directory" << endl << endl;
				cout << "7. Delete All Records" << endl << endl;
				cout << "0. Exit" << endl << endl;
				cout << endl;
				cout << "#Choice: ";
				cin >> choice;
				Sleep(1000);
				system("cls");

				if (choice == "1")
				{
					if (!donor.is_Full())
					{
						string n, g, p, s, num, email, add;
						double id;
					ArrayListAgain1:
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      INSERT DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;;
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
						cout << endl;
						index++;
						d[index] = new Student(id, n, g, p, s, num, email, add);
						donor.insert_Last(*d[index]);
						cout << "Do you want to Add another Record <y/n> ?" << endl;
						cin >> ans;
						if (ans == 'y')
						{
							system("CLS");
							goto ArrayListAgain1;
						}
					}
					else
					{
						cout << "\n\nDirectory is full." << endl;
						cout << "\nPlease expand\n\n" << endl;
					}
					cout << endl;

				}
				else if (choice == "2")
				{
					if (!donor.is_Empty())
					{
					ArrayListAgain2:
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      UPDATE DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;

						cout << "Student ID : ";
						cin.ignore();
						cin >> id;
						bool found = false; int i = 0;
						for (; i <= donor.get_Index(); i++)
							if (id == d[i]->get_Id())
							{
								found = true;
								break;
							}
						if (found == true)
						{
							system("CLS");
							cout << "CURRENT RECORD :" << endl << endl;
							Sleep(1000);
							cout << "\n\nStudent ID : " << d[i]->get_Id() << endl;
							cout << "\nName : " << d[i]->get_Name() << endl;
							cout << "\nGender : " << d[i]->get_Gender() << endl;
							Sleep(1000);
							cout << "\nProgram : " << d[i]->get_Program() << endl;
							cout << "\nSchool : " << d[i]->get_School() << endl;
							cout << "\nAddress: " << d[i]->get_Address() << endl;
							Sleep(1000);
							cout << "\nNumber: " << d[i]->get_Number() << endl;
							Sleep(1000);
							cout << "\nDo you want to update(y/n)?: ";
							cin >> ans;
							system("CLS");
							if (ans == 'y')
							{
								//delete d[i];
								cout << "NEW RECORD" << endl << endl;
								string n, g, p, s, num, email, add;
								double id;

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
								cout << endl;

								d[i] = new Student(id, n, g, p, s, num, email, add);
								donor.insert_At(i, *d[i]);
								system("CLS");
								cout << "Record # " << id << " has been Updated." << endl;
								cout << "Do you want to Update another Record <y/n> ?" << endl;
								cin >> ans;
								if (ans == 'y')
								{
									system("CLS");
									goto ArrayListAgain2;
								}
							}
						}
						else
						{
							cout << "\n\nRecord Not Found !\n\n" << endl; Sleep(1000);
						}

					}


					else
					{
						cout << "\n\nList is Empty.\n\n" << endl; Sleep(1000);
					}
					cout << endl;

				}
				else if (choice == "3")
				{
				ArrayListAgain3:
					if (!donor.is_Empty())
					{
					
						bool found = false;
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      DELETE DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;
						cout << "Student ID : ";
						//cin.ignore();
						cin>>id; int i = 0;
						for (; i <= donor.get_Index(); i++)
						{
							if (id == d[i]->get_Id())
							{
								found = true;
								break;
							}
						}
						
						if (found == true)
						{
						 if (i == 0)
						{
							
							Sleep(1000);
							donor.delete_First();
						}
					 else if (i == donor.get_Index())
							{
								donor.delete_Last();
							}
							
						else if((i != 0)&& (i != donor.get_Index()))
							{
								donor.delete_At(i);
							}
						
							cout << "Record # " << id << " has been deleted." << endl;
							found = true;
							Sleep(1000);
							cout << "Do you want to Delete another Record <y/n> ?" << endl;
							cin >> ans;
							if (ans == 'y')
							{
								system("CLS");
								goto ArrayListAgain3;
							}

						}
						else
						{
							system("cls");
							cout << "\n\nNo Record Found !\n\n" << endl;
							system("pause ");
						}
					}


					else
					{
						system("cls");
						cout << "\n\nList is Empty.\n\n" << endl;
						system("pause ");
					}


					cout << endl;
				}

				else if (choice == "4")
				{
				ArrayListAgain4:
					if (!donor.is_Empty())
					{
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      SEARCH DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;
						bool found = false;
						int c = 0;
						double id;
						cout << "Student ID: ";
						cin >> id;
						system("CLS");
						donor.search_Record(id);
						cout << "Do you want to Searc another Record <y/n> ?" << endl;
						cin >> ans;
						if (ans == 'y')
						{
							system("CLS");
							goto ArrayListAgain4;
						}
					}
				}
				else if (choice == "5")
				{
					if (!donor.is_Empty())
					{
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      RECORD DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;
						donor.print();
						system("pause");
					}
					else
					{
						cout << "Directory is Empty." << endl;
					}
					cout << endl;


				}
				else if (choice == "6")
				{
					cout << "Current capacity: " << donor.get_Size() << endl;
					cout << "Enter amount of expansion: ";
					cin >> SIZE;
					donor.expand(SIZE);
					cout << "New capacity: " << donor.get_Size() << endl;
					cout << endl;

				}
				else if (choice == "7")
				{
					if (!donor.is_Empty())
					{
						system("CLS");
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << "\t\t\t      DELETE DIRECTORY\n" << endl;
						cout << "\t\t\t_____________________________________\n" << endl;
						cout << endl;
						cout << endl;
						donor.DeleteList();
						cout << "Directory is Deleted !." << endl;
						
						system("pause");
					}
					else
					{
						cout << "Directory is Empty." << endl;
					}
					cout << endl;
				}
				else if (choice == "0")
				{
					goto MainPg;
				}
				else
				{
					cout << "Invalid Input!" << endl;
					cout << endl;
				}
			}

		}

		else if (option == "4")
		{
		
			Queue s;
			string choice = "-1";
			char ans;

			while (1)
			{
			Queueloop:
				system("CLS");
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << "\t\t\t      QUEUE DIRECTORY\n" << endl;
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << endl;
				
				cout << "\n\n1.EnQueue  Record\n" << endl;
				Sleep(50);
				cout << "2.DeQueue Record\n" << endl;
				Sleep(50);
				cout << "3.Display All Records\n" << endl;
				Sleep(100);
				cout << "4.Find Specific Record\n" << endl;
				Sleep(50);
				cout << "5.DeQueue All Records\n" << endl;
				Sleep(50);
				cout << "6.Size of Queue\n" << endl;
				Sleep(50);
				cout << "0.Return to MAIN PAGE\n\n" << endl;
				Sleep(100);
				cout << "<>choice :: ";

				cin >> choice;


				system("cls");
				if (choice == "1")
				{
				Enqueueagain:
					s.enqueue();
					cout << "\n\nDo you want to EnQueue another Record <y/n> ?\n" << endl;
					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto Enqueueagain;
					}
					else
					{
						goto Queueloop;
					}
				}
				else if (choice == "2")
				{
				DeQueueAgain:
					system("cls");
					s.de_queue();
					cout << "Record has been DeQueue !\n\n";
					Sleep(1000);
					cout << "\nDo you want to DeQueue another Student Record (y/n) ? ";

					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto DeQueueAgain;
					}
					else
					{
						goto Queueloop;
					}
				}
				

				else if (choice == "3")
				{
					system("cls");
					s.display();
					system("pause");


				}

				else if (choice == "4")
				{
				SearchAgain:
					system("cls");
					double k;
					cout << "Enter Student ID : ";
					cin >> k;
					s.Search(k);
					Sleep(1000);
					cout << "Do you want to Search another Student Record (y/n) ? ";

					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto SearchAgain;
					}
					else
					{
						goto Queueloop;
					}

				}
				else if (choice == "5")
				{
					system("cls");
					s.DeQueue_List();
					system("pause");
				}
				else if (choice == "6")
				{
					system("cls");
					cout << "\n\nSize of Queue List : "<<s.size()<<"\n" << endl;
					system("pause");
				}

				else if (choice == "0")
				{
					goto MainPg;

				}
				else
				{
					cout << "\n\nInvalid Input !!\n" << endl;
					Sleep(2000);
					goto Queueloop;

				}
			}

		}
		else if (option == "5")
		{

			Stack s;
			string choice = "-1";
			char ans;

			while (1)
			{
			Stackloop:
				system("CLS");
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << "\t\t\t      STACK DIRECTORY\n" << endl;
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << endl;
				
				cout << "\n\n1.PUSH Record\n" << endl;
				Sleep(50);
				cout << "2.POP Record\n" << endl;
				Sleep(50);
				cout << "3.DISPLAY All Records\n" << endl;
				Sleep(100);
				cout << "4.SEARCH Specific Record\n" << endl;
				Sleep(50);
				cout << "5.DELETE All Records\n" << endl;
				Sleep(50);
				cout << "6.SIZE of Stack\n" << endl;
				Sleep(50);
				cout << "0.Return to MAIN PAGE\n\n" << endl;
				Sleep(100);
				cout << "<>choice :: ";

				cin >> choice;


				system("cls");
				if (choice == "1")
				{
				PushAgain:
					s.push();
					cout << "\n\nDo you want to PUSH another Record <y/n> ?\n" << endl;
					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto PushAgain;
					}
					else
					{
						goto Stackloop;
					}
				}
				else if (choice == "2")
				{
				PopAgain:
					system("cls");
					if (s.isEmpty() == false)
					{
					
						s.pop();
						Sleep(1000);
						cout << "\nDo you want to POP another Student Record (y/n) ? ";

						cin >> ans;
						if (ans == 'y')
						{
							system("cls");
							
								goto PopAgain;
						     
						}
						else
						{
							goto Stackloop;
						}
					
					}
				}
				

				else if (choice == "3")
				{
					system("cls");
					s.display();
					
					system("pause");


				}

				else if (choice == "4")
				{
				SearchStackAgain:
					system("cls");
					double k;
					cout << "Enter Student ID : ";
					cin >> k;
					s.Search(k);
					Sleep(1000);
					cout << "Do you want to Search another Student Record (y/n) ? ";

					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto SearchStackAgain;
					}
					else
					{
						goto Stackloop;
					}

				}
				else if (choice == "5")
				{
					system("cls");
					s.Del_List();
					system("pause");
				}
				else if (choice == "6")
				{
					system("cls");
					cout << "\n\nSize of Stack : " << s.size() << "\n" << endl;
					system("pause");
				}

				else if (choice == "0")
				{
					goto MainPg;

				}
				else
				{
					cout << "\n\nInvalid Input !!\n" << endl;
					Sleep(2000);
					goto Stackloop;

				}
			}


		}
		else if (option == "6")
		{
			tree t; string choice = "-1";
			char ans;

			while (1)
			{
			Binaryloop:
				system("CLS");
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << "\t\t\t      BINARY SEARCH DIRECTORY\n" << endl;
				cout << "\t\t\t_____________________________________\n" << endl;
				cout << endl;
				cout << "\n\n1.ADD Record\n" << endl;
				Sleep(50);
				cout << "2.DELETE Record\n" << endl;
				Sleep(50);
				cout << "3.DISPLAY All Records\n" << endl;
				Sleep(100);
				cout << "4.SEARCH  Record\n" << endl;
				Sleep(50);
				cout << "5.DELETE All Records\n" << endl;
				Sleep(50);
				cout << "0.Return to MAIN PAGE\n\n" << endl;
				Sleep(100);
				cout << "<>choice :: ";

				cin >> choice;


				system("cls");
				if (choice == "1")
				{
				BinarInsertAgain:
					t.Insert_Node();
					cout << "\n\nDo you want to ADD another Record <y/n> ?\n" << endl;
					cin >> ans;
					if (ans == 'y')
					{
						system("cls");
						goto BinarInsertAgain;
					}
					else
					{
						goto Binaryloop;
					}
				}
				else if (choice == "2")
				{
					system("cls");
					double key;
				BinaryDelAgain:
					if (t.get_Root()!=NULL)
					{
						cout << "Enter ID : ";
						cin >> key;
						t.Delete_Node(key);
						
						cout << "\n\nDo you want to Delete other Student Record (y/n) ? ";

						cin >> ans;
						if (ans == 'y')
						{
							system("cls");
							goto BinaryDelAgain;
						}
					}
					else
					{
						cout << "\n\nNO RECORDS....\n " << endl;
						Sleep(1000);
					}

				}

				else if (choice == "3")
				{
				
					system("cls");
				
					t.traverse();
				
					

				}
				else if (choice == "4")
				{
				BinaryFindAgain:
					if (t.get_Root() != NULL)
					{
						double k;
						system("cls");
						cout << "Enter Student ID : ";
						cin >> k;

						t.findNodebyvalue(k);
						cout << "Do you want to Find other Student Record (y/n) ? ";

						cin >> ans;
						if (ans == 'y')
						{
							system("cls");
							goto BinaryFindAgain;
						}
					}
					else
					{
						cout << "\n\nNO RECORDS....\n " << endl;
						Sleep(1000);
					}

				}
				else if (choice == "5")
				{

					system("cls");
					if (t.get_Root()!=NULL)
					{
						t.removeAll(t.get_Root());
						t.set_Root(NULL);
						system("cls");
						cout << "\n\nDirectory is Deleted !";
						Sleep(2000);

					}
					else
					{
						cout << "\n\nDirectory is Already Empty.... "; Sleep(2000);
					}

				}

				else if (choice == "0")
				{
					goto MainPg;

				}
				else
				{
					cout << "\n\nInvalid Input !!\n" << endl;
					Sleep(2000);
					goto Binaryloop;

				}
			}
		}



		else if (option == "0")
		{
			exit(EXIT_FAILURE);

		}
		else
		{
			cout << "\n\nInvalid Input !!\n" << endl;
			Sleep(2000);
			
			
			goto MainPg;

		}
	}



	system("pause");



}