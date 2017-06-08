#include "Student.h"



Student::Student()
{
}

Student::Student(string oib)
{
	OIB = oib;
}


Student::~Student()
{
}

void Student::radniStatus()
{
	cout << "Redovni student" << endl;
}
