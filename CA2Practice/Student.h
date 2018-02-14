#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
	friend class StudentListNode;
public:
	Student();
	Student(string, int);
	string getName();
	int getAge();
	void setName(string);
	void setAge(int);

private:
	string name;
	int age;
};

#endif