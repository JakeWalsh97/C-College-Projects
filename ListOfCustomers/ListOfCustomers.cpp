#include "ListOfCustomers.h"
#include "Customers.h"
#include "CustomerListNode.h"
#include "StackOfCustomers.h"
#include <iostream>
#include <string>

using namespace std;

ListOfCustomers::ListOfCustomers()
	:head(NULL)
{}

ListOfCustomers::~ListOfCustomers()
{
	CustomerListNode *tempPtr = head;
	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void ListOfCustomers::insertAtFront(string n, int a, string p, string acc, double b) {
	CustomerListNode *n1 = new CustomerListNode(n, a, p, acc, b);
	n1->next = head;
	head = n1;
}

void ListOfCustomers::deleteMostRecent() {
	if (head != NULL) {
		CustomerListNode *first = head;
		CustomerListNode *trail = NULL;

		while (first->next != NULL) {
			trail = first;
			first = first->next;
		}
		trail->next = NULL;
		delete first;
	}
}

double ListOfCustomers::getBalance(string n) {
	CustomerListNode *temp = head;

	while (temp != NULL && temp->cust.getName() != n) {
		temp = temp->next;

		if (temp->cust.getName() == n) {
			temp->next == NULL;
			return temp->cust.getBalance();
		}
	}
}

void ListOfCustomers::display() const{
	CustomerListNode* tempPtr = head;
	while (tempPtr != NULL) {
		cout << "Name: \t\t\t" << tempPtr->cust.getName() << "\nAge: \t\t\t" << tempPtr->cust.getAge() << "\nPhone Number: \t\t" << tempPtr->cust.getPhone() << "\nAccount Number: \t" << tempPtr->cust.getAccNum() << "\nBalance: \t\t$" << tempPtr->cust.getBalance() << endl;
		cout << "==================================================" << endl;
		tempPtr = tempPtr->next;
	}
}

ListOfCustomers::ListOfCustomers(const ListOfCustomers &l) {
	*this = l;
}

const ListOfCustomers& ListOfCustomers::operator=(const ListOfCustomers &l) {
	CustomerListNode *copyPtr = NULL;
	CustomerListNode *origPtr = l.head;

	while (origPtr != NULL) {
		if (head == NULL) {
			head = copyPtr = new CustomerListNode(origPtr->cust.getName(), origPtr->cust.getAge(), origPtr->cust.getPhone(), origPtr->cust.getAccNum(), origPtr->cust.getBalance());
		}
		else {
			copyPtr->next = new CustomerListNode(origPtr->cust.getName(), origPtr->cust.getAge(), origPtr->cust.getPhone(), origPtr->cust.getAccNum(), origPtr->cust.getBalance());
			copyPtr = copyPtr->next;
		}
		origPtr = origPtr->next;
	}
	return *this;
}

ostream & operator<<(ostream & out, ListOfCustomers & c) {
	c.display();
	return out;
}