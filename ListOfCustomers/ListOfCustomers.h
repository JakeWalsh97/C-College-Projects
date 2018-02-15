#include <iostream>
#include <string>

using namespace std;

#ifndef LISTOFCUSTOMERS_H
#define LISTOFCUSTOMERS_H

class ListOfCustomers {
	friend class Customers;
	friend class CustomerListNode;
	friend class StackOfCustomers;

public:
	ListOfCustomers();
	~ListOfCustomers();
	void insertAtFront(string, int, string, string, double);
	void deleteMostRecent();
	double getBalance(string name);
	void display() const;
	ListOfCustomers(const ListOfCustomers &l);
	const ListOfCustomers& ListOfCustomers::operator=(const ListOfCustomers&);
	friend ostream & operator<<(ostream &out, ListOfCustomers &c);
private:
	CustomerListNode *head;
};
#endif