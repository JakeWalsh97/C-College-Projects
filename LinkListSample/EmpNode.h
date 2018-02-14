#pragma once

#include <iostream>
#include <string>

using namespace std;

class EmpNode {
	friend class listOfEmp;
public:
	EmpNode{ int id, string name };
private:
	Employee emp;
	EmpNode *next;
};
