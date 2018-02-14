#include <iostream>
#include <string>
#include "Doubles.h"
#include "DoubleListNode.h"
#include "ListOfDoubles.h"

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

	system("pause");

}