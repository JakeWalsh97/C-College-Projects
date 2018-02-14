#include "ListOfEmployees.h"
#include "Employee.h"
#include "EmployeeListNode.h"
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

EmployeeListNode::EmployeeListNode(string s, double d)
{
	emp.name = s;
	emp.salary = d;
}

EmployeeListNode::~EmployeeListNode()
{
}
