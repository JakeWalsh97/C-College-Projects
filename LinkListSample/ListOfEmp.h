#pragma once

#include <iostream>
#include <string>

using namespace std;

class ListOfEmp {
public:
	ListOfEmp();
	~ListOfEmp();
	bool findEmp(int id, Employee &Emp) const;
	bool insertEmp(int id, string name);
private:
	EmpNode *head;
};