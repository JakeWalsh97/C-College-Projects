#include <iostream>
#include <string>
#include "Doubles.h"
#include "DoubleListNode.h"
#include "ListOfDoubles.h"
#include "ListOfEmployees.h"

using namespace std;

int main() {
	ListOfDoubles l;
	l.insert(1.5);
	l.insert(3.7);
	l.insert(2.9);
	l.insert(5.2);
	l.insert(4.1);

	cout << "Contents of List of Doubles: " << endl;
	l.displayList();

	cout << "Deleting last value in list........." << endl;
	l.deleteMostRecent();
	cout << "Contents of new list: " << endl;
	l.displayList();

	cout << "==================================" << endl;
	cout << "Deleting value " << l.deleteDouble(2) << " from list......." << endl;

	cout << "Contents of new list: " << endl;
	l.displayList();

	ListOfEmployee e;
	cout << "\n==================================" << endl;
	cout << "Contents of List of Employees: " << endl;
	e.insert(40000.00, "Sean");
	e.insert(60000.00, "Declan");
	e.insert(70000.00, "Jordan");
	e.insert(50000.00, "Jake");
	e.insert(80000.00, "Dylan");

	e.display();

	cout << "==================================" << endl;
	cout << "Deleting last value in list........." << endl;
	e.deleteMostRecent();
	cout << "Contents of new list: " << endl;
	e.display();

	cout << "==================================" << endl;
	cout << "Retrieving salary for Jake: " << "$" << e.getSalary("Jake") << endl;

	system("pause");

}