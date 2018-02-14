#include "employee.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string name, address;
	double salary = 0.0;
	int age = 0;

	cout << "Enter the name of employee: " << endl;
	cin >> name;
	cout << "Enter the age of employee: " << endl;
	cin >> age;
	cout << "Enter the address of employee: " << endl;
	cin >> address;
	cout << "Enter the salary of employee: " << endl;
	cin >> salary;

	Employee e1(name, age, address, salary);

	ofstream writer("employee.txt");
	writer << "Employee 1" << endl;
	writer << "Name: " << name << endl;
	writer << "Age: " << age << endl;
	writer << "Address: " << address << endl;
	writer << "Salary: " << salary << endl;
	writer << "============================" << endl;

	writer.close();

	cout << "Enter the name of employee 2: " << endl;
	cin >> name;
	cout << "Enter the age of employee 2: " << endl;
	cin >> age;
	cout << "Enter the address of employee 2: " << endl;
	cin >> address;
	cout << "Enter the salary of employee 2: " << endl;
	cin >> salary;

	Employee e2(name, age, address, salary);
	Employee e3;
	e3 = e1 + e2;

	ofstream writer2("employee.txt", ios::app);
		writer2 << "Employee 2" << endl;
		writer2 << "Name: " << name << endl;
		writer2 << "Age: " << age << endl;
		writer2 << "Address: " << address << endl;
		writer2 << "Salary: " << salary << endl;
		writer2 << "Total Salary of both employees: " << e3.getSalary() << endl;

		writer2.close();
	

	ifstream reader("employee.txt");
		char letter;
		cout << "Employee Details read from file: " << endl;
		for (int i = 0; !reader.eof(); i++) {
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		
	system("pause");


}