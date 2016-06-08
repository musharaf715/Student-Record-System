
#include "Student.h"

class ArrayList
{
private:
	Student *d;
	int size;
	int index;
public:
	ArrayList();
	ArrayList(int);
	int get_Size();
	int get_Index();
	void insert_Last(Student);
	void insert_At(int, Student);
	void delete_Last();
	void delete_First();
	void delete_At(int);
	bool is_Empty();
	bool is_Full();
	int expand(int);
	int search_Name(string);
	void search_Record(double);
	void print();
	//friend bool operator==(Student &d, string&);
	friend ostream& operator<<(ostream &, Student &);
	~ArrayList();
	void DeleteList();
};

