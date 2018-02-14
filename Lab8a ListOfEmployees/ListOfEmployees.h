#include <iostream>
#include <string>
#include <ostream>

using namespace std;

#ifndef LISTOFEMPLOYEES_H
#define LISTOFEMPLOYEES_H

class ListOfEmployees {
	friend class Employee;
	friend class EmployeeListNode;
public:
	ListOfEmployees();
	~ListOfEmployees();
	void insertAtFront(string, double);
	void deleteMostRecent();
	double getSalary(string name);
	void display();
	ListOfEmployees(const ListOfEmployees &l);
	const ListOfEmployees& ListOfEmployees::operator=(const ListOfEmployees&);
	friend ostream & operator<<(ostream & out, ListOfEmployees &e);
private:
	EmployeeListNode *head;
};

#endif
