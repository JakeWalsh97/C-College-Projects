#include <iostream>
#include <string>

using namespace std;

#ifndef CUSTOMERLISTNODE_H
#define CUSTOMERLISTNODE_H

class CustomerListNode {
	friend class Customers;
	friend class ListOfCustomers;
	friend class StackOfCustomers;
public:
	CustomerListNode(string, int, string, string, double);
	~CustomerListNode();
private:
	Customers cust;
	CustomerListNode *next;
};

#endif
