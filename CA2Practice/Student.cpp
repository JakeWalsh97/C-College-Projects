#include "Student.h"
#include "StudentListNode.h"
#include "ListOfStudents.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student()
{
	name = "";
	age = 0;
}

Student::Student(string n, int a)
{
	name = n;
	age = a;
}

string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

void Student::setName(string n)
{
	name = n;
}

void Student::setAge(int a)
{
	age = a;
}
