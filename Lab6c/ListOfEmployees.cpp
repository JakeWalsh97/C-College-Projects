#include "ListOfEmployees.h"
#include "Employee.h"
#include "EmployeeListNode.h"
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

ListOfEmployees::ListOfEmployees()
	:head(NULL)
{}

ListOfEmployees::~ListOfEmployees()
{
	EmployeeListNode *tempPtr = head;
	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void ListOfEmployees::insertAtFront(string n, double s)
{
	EmployeeListNode *n1 = new EmployeeListNode(n, s);
	n1->next = head;
	head = n1;
}

void ListOfEmployees::deleteMostRecent()
{
	if (head != NULL) {
		EmployeeListNode *first = head;
		EmployeeListNode *trail = NULL;

		while (first->next != NULL) {
			trail = first;
			first = first->next;
		}
		trail->next = NULL;
		delete first;
	}
}

double ListOfEmployees::getSalary(string n)
{
	EmployeeListNode *temp = head;

	while (temp != NULL && temp->emp.getName() != n) {
		temp = temp->next;
		if (temp->emp.getName() == n) {
			temp->next == NULL;
			return temp->emp.getSal();
		}
	}
}

void ListOfEmployees::display()
{
	EmployeeListNode* tempPtr = head;
	while (tempPtr != NULL) {
		cout << tempPtr->emp.getName() << ": $" << tempPtr->emp.getSal() << endl;
		tempPtr = tempPtr->next;
	}
}

ListOfEmployees::ListOfEmployees(const ListOfEmployees &l)
{
	*this = l;
}

const ListOfEmployees& ListOfEmployees::operator=(const ListOfEmployees& l) {
	EmployeeListNode *copyPtr = NULL;
	EmployeeListNode *origPtr = l.head;

	while (origPtr != NULL) {
		if (head == NULL) {
			head = copyPtr = new EmployeeListNode(origPtr->emp.getName(), origPtr->emp.getSal());
		}
		else {
			copyPtr->next = new EmployeeListNode(origPtr->emp.getName(), origPtr->emp.getSal());
			copyPtr = copyPtr->next;
		}
		origPtr = origPtr->next;
	}
	return *this;
}

ostream & operator<<(ostream & out, ListOfEmployees & e)
{
	e.display();
	return out;
}
