#include "ListOfCustomers.h"
#include "Customers.h"
#include "CustomerListNode.h"
#include "StackOfCustomers.h"
#include <iostream>
#include <ostream>

using namespace std;

StackOfCustomers::StackOfCustomers() 
{
	lc.head = NULL;
}

StackOfCustomers::~StackOfCustomers()
{
	CustomerListNode *tempPtr = lc.head;
	while (lc.head) {
		tempPtr = lc.head;
		lc.head = lc.head->next;
		delete tempPtr;
	}
}

void StackOfCustomers::push(string n, int a, string p, string acc, double b) {
	lc.insertAtFront(n, a, p, acc, b);
}

void StackOfCustomers::pop() {
	lc.deleteMostRecent();
}

string StackOfCustomers::top() {
	return lc.head->cust.getName();
}

void StackOfCustomers::displayStack() const
{
	CustomerListNode* tempPtr = lc.head;
	while (tempPtr != NULL) {
		cout << "Name: \t\t\t" << tempPtr->cust.getName() << "\nAge: \t\t\t" << tempPtr->cust.getAge() <<
			"\nPhone Number: \t\t" << tempPtr->cust.getPhone() << "\nAccount Number: \t" << tempPtr->cust.getAccNum()
			<< "\nBalance: \t\t$" << tempPtr->cust.getBalance() << endl;
		cout << "==================================================" << endl;
		tempPtr = tempPtr->next;
	}
}

StackOfCustomers::StackOfCustomers(StackOfCustomers & s)
{
	*this = s;
}

const StackOfCustomers &StackOfCustomers::operator=(StackOfCustomers &s) {
	CustomerListNode *copyPtr = NULL;
	CustomerListNode *origPtr = s.lc.head;

	while (origPtr != NULL) {
		if (lc.head == NULL) {
			lc.head = copyPtr = new CustomerListNode(origPtr->cust.getName(), origPtr->cust.getAge(), origPtr->cust.getPhone(), origPtr->cust.getAccNum(), origPtr->cust.getBalance());
		}
		else {
			copyPtr->next = new CustomerListNode(origPtr->cust.getName(), origPtr->cust.getAge(), origPtr->cust.getPhone(), origPtr->cust.getAccNum(), origPtr->cust.getBalance());
		}
		origPtr = origPtr->next;
	}
	return *this;
}

ostream & operator<<(ostream & out, const StackOfCustomers & stackObj) {
	stackObj.lc.display();
	return out;
}


