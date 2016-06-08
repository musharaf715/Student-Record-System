#include "Student.h"


Student::Student()
{
}
Student::Student(double id, string n, string g, string p, string s, string num, string e, string add)
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


double Student::get_Id()
{
	return Id;
}

string Student::get_Name()
{
	return Name;
}
string Student::get_Gender()
{
	return Gender;
}
string Student::get_Program()
{
	return Program;
}
string Student::get_School()
{
	return School;
}
string Student::get_Email()
{
	return Email;
}
string Student::get_Address()
{
	return Address;
}
string Student::get_Number()
{
	return cellNumber;
}
Student::~Student()
{
}

