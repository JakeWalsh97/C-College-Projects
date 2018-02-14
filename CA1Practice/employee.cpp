#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

Employee::Employee()
{

}

Employee::Employee(string &n, int &a, string &add, double &s)
{
	name = n;
	age = a;
	address = add;
	salary = s;
}

Employee::~Employee()
{

}

string Employee::getName() {
	return name;
}

int Employee::getAge() {
	return age;
}

string Employee::getAddress() {
	return address;
}

double Employee::getSalary() {
	return salary;
}

void Employee::setName(string& n) {
	name = n;
}

void Employee::setAge(int& a) {
	age = a;
}

void Employee::setAddress(string& add) {
	address = add;
}

void Employee::setSalary(double& s) {
	salary = s;
}

Employee Employee::operator+(Employee& e1)
{
	Employee temp;
	temp.salary = salary + e1.salary;
	return temp;
}
