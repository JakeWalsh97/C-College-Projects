#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee {
	friend class EmpNode;
public:
	Employee();
private:
	int id;
	string name;
};
