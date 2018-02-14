#include <iostream>
#include <string>
#include <ostream>
#include "Employee.h"
#include "ListOfEmployees.h"
#include "EmployeeListNode.h"

using namespace std;

int main() {
	ListOfEmployees l;
	ListOfEmployees l1;
	l.insertAtFront("Jake", 70000.00);
	l.insertAtFront("Deco", 60000.00);
	l.insertAtFront("Jim", 50000.00);
	cout << "===================================" << endl;
	cout << "3 entries added to the list" << endl;

	l.display();

	cout << "===================================" << endl;
	cout << "Calling getSalary() on Jake" << endl;
	cout << "Salary of Jake: $" << l.getSalary("Jake") << endl;

	l.deleteMostRecent();
	cout << "===================================" << endl;
	cout << "Deleting most recent entry" << endl;
	l.display();

	l1 = l;
	cout << "===================================" << endl;
	cout << "Contents of l1 after operator=" << endl;
	l1.display();

	l.insertAtFront("Sean", 45000.00);
	l.insertAtFront("Dyl", 69696.90);
	cout << "===================================" << endl;
	cout << "Adding 2 more entries" << endl;
	l.display();

	ListOfEmployees l2(l);
	cout << "===================================" << endl;
	cout << "Contents of l2 after copy of l" << endl;
	l2.display();

	cout << "===================================" << endl;
	cout << "Overloaded << operator print statement" << endl;
	cout << l;

	system("pause");
}