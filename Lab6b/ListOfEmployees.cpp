#include <iostream>
#include <string>
#include "ListOfEmployees.h"

using namespace std;

ListOfEmployee::ListOfEmployee()
	:head(NULL)
{}

ListOfEmployee::~ListOfEmployee()
{
	Employee *tempPtr = head;
	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void ListOfEmployee::insert(double sal, string n)
{
	Employee* n1;
	n1 = new Employee;
	n1->name = n;
	n1->salary = sal;
	n1->next = head;
	head = n1;
}

void ListOfEmployee::display()
{
	Employee* tempPtr = head;
	while (tempPtr != NULL) {
		cout << tempPtr->name << ": $" << tempPtr->salary << endl;
		tempPtr = tempPtr->next;
	}
}

void ListOfEmployee::deleteMostRecent()
{
	if (head != NULL) {
		Employee* first = head;
		Employee* trail = NULL;
		while (first->next != NULL)
		{
			trail = first;
			first = first->next;
		}
		trail->next = NULL;
		delete first;
	}
}

double ListOfEmployee::getSalary(string n)
{
	Employee* temp = head;

	while (temp != NULL && temp->name != n)
	{
		temp = temp->next;

		if (temp->name == n)
		{
			temp->next == NULL;
			return temp->salary;
		}
	}
}






