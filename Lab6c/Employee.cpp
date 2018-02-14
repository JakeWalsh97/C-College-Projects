#include "ListOfEmployees.h"
#include "Employee.h"
#include "EmployeeListNode.h"
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

Employee::Employee()
{
	name = " ";
	salary = 0.0;
}

Employee::Employee(string n, double s)
{
	name = n;
	salary = s;
}

string Employee::getName()
{
	return name;
}

double Employee::getSal()
{
	return salary;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setSalary(double s)
{
	salary = s;
}