#include <iostream>
#include <string>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
	Employee();
	Employee(string&, int&, string&, double&);
	~Employee();
	string getName();
	int getAge();
	string getAddress();
	double getSalary();
	void setName(string&);
	void setAge(int&);
	void setAddress(string&);
	void setSalary(double&);
	Employee operator+ (Employee&);


private:
	string name;
	int age = 0;
	string address;
	double salary = 0.0;
};

#endif;
