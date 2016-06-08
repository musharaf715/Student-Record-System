#pragma once
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;

//template<class T>

class Student
{
private:
	string Name, Gender, Program, School, cellNumber, Email, Address;
	double Id;

public:
	Student();
	~Student();
	Student(double, string, string, string, string, string, string, string);
	double get_Id();
	string get_Name();
	string get_Gender();
	string get_Program();
	string get_School();
	string get_Number();
	string get_Email();
	string get_Address();





};
