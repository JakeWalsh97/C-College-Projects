#include <iostream>
#include <ostream>
#include <string>

using namespace std;

#ifndef STACKOFCUSTOMERS_H
#define STACKOFCUSTOMERS_H

class StackOfCustomers {
	friend class ListOfCustomers;
public:
	StackOfCustomers();
	~StackOfCustomers();
	void push(string name, int age, string phone, string accNum, double balance);
	void pop();
	string top();
	friend ostream & operator<<(ostream &out, const StackOfCustomers &stackObj);
	StackOfCustomers(StackOfCustomers &s);
	const StackOfCustomers & StackOfCustomers::operator=(StackOfCustomers&);

private:
	ListOfCustomers lc;
};

#endif;