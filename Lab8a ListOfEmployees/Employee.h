#include <iostream>
#include <string>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
	friend class EmployeeListNode;
public:
	Employee();
	Employee(string, double);
	string getName();
	double getSal();
	void setName(string);
	void setSalary(double);
private:
	string name;
	double salary;
};

#endif
