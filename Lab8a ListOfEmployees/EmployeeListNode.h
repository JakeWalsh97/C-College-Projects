#include <iostream>
#include <string>
#include <ostream>

using namespace std;

#ifndef EMPLOYEELISTNODE_H
#define EMPLOYEELISTNODE_H

class EmployeeListNode {
	friend class ListOfEmployees;
	EmployeeListNode(string, double);
	~EmployeeListNode();
private:
	Employee emp;
	EmployeeListNode *next;
};

#endif