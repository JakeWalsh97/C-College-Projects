#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
	friend class StudentListNode;
public:
	Student();
	~Student();
	string getName();
	int getAge();
	void setName(string);
	void setAge(int);

private:
	std::string name;
	int age;
};

#endif