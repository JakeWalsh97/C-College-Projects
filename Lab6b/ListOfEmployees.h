#include <iostream>
#include <string>

#ifndef LISTOFEMPLOYEE_H
#define LISTOFEMPLOYEE_H

using namespace std;

struct Employee {
	string name;
	double salary;
	Employee *next;
};

class ListOfEmployee {
public:
	ListOfEmployee();
	~ListOfEmployee();
	void insert(double, string);
	void display();
	void deleteMostRecent();
	double getSalary(string name);
private:
	Employee *head;
};


#endif