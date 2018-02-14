#include <iostream>
#include <string>

using namespace std;

#ifndef LISTOFSTUDENTS_H
#define LISTOFSTUDENTS_H

class ListOfStudents {
	friend class Student;
	friend class StudentListNode;
public:
	ListOfStudents();
	~ListOfStudents();
	void insertAtStart(string, int);
	void deleteAtPos(string name);
	double getAge(string name);
	void display();

private:
	StudentListNode *head;
};

#endif