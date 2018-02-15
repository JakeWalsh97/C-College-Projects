#include <iostream>
#include <string>
#include <ostream>
#include "Customers.h"
#include "ListOfCustomers.h"
#include "CustomerListNode.h"
#include "StackOfCustomers.h"

using namespace std;

int main() {
	ListOfCustomers l;
	ListOfCustomers l1;
	l.insertAtFront("Jake", 20, "0879592297", "x00129654", 2000.00);
	l.insertAtFront("Deco", 21, "0871234567", "x00131110", 1500.00);
	l.insertAtFront("Jim", 24, "08798765432", "x00130180", 2400.00);
	cout << "======================================" << endl;
	cout << "3 entries added to the list" << endl;

	l.display();

	cout << "Calling getBalance() on Jake" << endl;
	cout << "Balance of Jake: $" << l.getBalance("Jake") << endl;
	cout << "======================================" << endl;

	l.deleteMostRecent();
	cout << "Contents of l1 after operator= and deleting Jake" << endl;
	l1.display();

	l.insertAtFront("Sean", 21, "0875555555", "x00125678", 1100.00);
	l.insertAtFront("Dyl", 19, "08744444444", "x00234511", 3450.00);
	cout << "Adding 2 more entries" << endl;
	l.display();

	ListOfCustomers l2(l);
	cout << "Contents of l2 after copy of l" << endl;
	l2.display();

	cout << "Contents of l2 after copy l" << endl;
	l2.display();

	cout << "Overloaded << operator print statement" << endl;
	cout << l;

	StackOfCustomers s;
	s.push("Mesut", 29, "11", "x11", 300000);
	s.push("Pierre-Emerick", 28, "14", "x14", 350000);
	s.push("Henrikh", 29, "7", "x7", 275000);
	s.push("Jack", 26, "10", "x10", 150000);
	s.push("Aaron", 27, "8", "x8", 200000);

	cout << "Contents of the stack\nCalling overloaded == operator" << endl;
	cout << s;

	cout << "Calling copy constructor" << endl;
	StackOfCustomers s1(s);

	cout << "Contents of new list: " << endl;
	cout << s1;

	StackOfCustomers s2;
	cout << "Calling overloaded == operator" << endl;
	s2 = s1;
	cout << "Contents of new list: " << endl;
	cout << s2;

	system("pause");

}