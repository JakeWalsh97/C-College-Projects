#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENTLISTNODE_H
#define STUDENTLISTNODE_H

class StudentListNode {
	friend class ListOfStudents;
public:
	StudentListNode();
	~StudentListNode();

private:
	Student stu;
	StudentListNode *next;
};

#endif