#include "ArrayList.h"
#include "Student.h"

ArrayList::ArrayList()
{
}
ArrayList::ArrayList(int s)
{
	size = s;
	d = new Student[s];
	index = -1;
}
int ArrayList::get_Size()
{
	return size;
}
int ArrayList::get_Index()
{
	return index;
}
void ArrayList::insert_Last(Student st)
{
	index++;
	d[index] = st;
}
void ArrayList::insert_At(int count, Student st)
{
	if (index != NULL)
		d[count] = st;
	else
		cout << "List is Empty !" << endl;
}
void ArrayList::delete_Last()
{
	int size1 = size - 1;
	Student *s = new Student[size1];
	for (int i = 0; i <= index-1; i++)
	{
		s[i] = d[i];
	}
	index--;
	delete[]d;
	//Student *d = new Student();
	d = s;
	size = size1;
}
void ArrayList::delete_First()
{
	int size1 = size - 1;
	Student *s = new Student[size1];
	for (int i = 0; i <= index; i++)
	{
		s[i] = d[i + 1];
	}
	index--;
	delete[]d;
	//Student *d = new Student();
	d=s;
	size = size1;
}
void ArrayList::DeleteList()
{
	for (int i = index; i > -1; i--)
	{
		index--;
	}
}
void ArrayList::delete_At(int count)
{
	if (index != NULL)
	{
		int size1 = size - 1;
		Student *st = new Student[size1];
		for (int i = 0; i < count; i++)
		{
			st[i] = d[i];
		}

		for (int i = count; i <= index; i++)
		{
			st[i] = d[i + 1];
		}
		index--;
		delete[]d;
		Student *d = new Student();
		d = st;
		size = size1;
	}
	else
		cout << "List is Empty !" << endl;
}
bool ArrayList::is_Empty()
{
	if (index == -1)
		return true;
	else
		return false;
}
bool ArrayList::is_Full()
{
	if (index == size - 1)
		return true;
	else
		return false;
}
int ArrayList::expand(int s)
{
	size += s;
	return size;
}
int ArrayList::search_Name(string n)
{
	int i;
	bool found = false;
	for (i = 0; i <= index; i++)
	{
		if (d[i].get_Name() == n)
		{
			found = true;
			break;
		}
	}
	if (found == false)
	{
		return 0;
	}
	else
	{
		return i;
	}
}
void ArrayList::search_Record(double id)
{
	if (index != -1)
	{
		int i;
		bool found = false;
		for (i = 0; i <= index; i++)
		{
			if (id == d[i].get_Id())
			{
				found = true;
				break;
			}
		}
		if (found == false)
		{
			cout << "Not Found !" << endl;
		}
		else
		{
			cout << "Student ID : " << d[i].get_Id() << endl;
			cout << "Name : " << d[i].get_Name() << endl;
			cout << "Gender : " << d[i].get_Gender() << endl;
			cout << "Program : " << d[i].get_Program() << endl;
			cout << "School : " << d[i].get_School() << endl;
			cout << "Address: " << d[i].get_Address() << endl;
			cout << "Number: " << d[i].get_Number() << endl;
		}
	}
	else
	{
		cout << "List is Empty ! " << endl;
	}
}
void ArrayList::print()
{
	if (index != -1)
	{
		for (int i = 0; i <= index; i++)
		{

			cout << "RECORD # " << i + 1 << endl << endl;
			cout << d[i] << endl << endl;

		}
	}
	else
	{
		cout << "List is Already Empty !" << endl;
	}
}
ostream& operator<<(ostream &os, Student &d)
{
	os << "Student ID : " << d.get_Id() << endl;
	os << "Name : " << d.get_Name() << endl;
	os << "Gender : " << d.get_Gender() << endl;
	os << "Program : " << d.get_Program() << endl;
	os << "School : " << d.get_School() << endl;
	os << "Address: " << d.get_Address() << endl;
	os << "Number: " << d.get_Number() << endl;
	return os;
}
ArrayList::~ArrayList()
{
	delete[]d;
}
