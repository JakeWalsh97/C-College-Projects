#include "ListOfInts.h"
#include "Ints.h"
#include "IntNode.h"
#include "Deque.h"
#include <iostream>

using namespace std;

int main() {
	ListOfInts l;
	l.insert(1);
	l.insert(9);
	l.insert(7);
	l.insert(5);
	l.insert(2);
	l.insert(8);
	l.insert(3);
	l.insert(4);
	l.insert(6);
	l.insert(10);

	cout << "Contents of the list of integers" << endl;
	l.displayList();

	cout << "Creating a deque array and inserting values from the list." << endl;
	Deque d;
	for (int i = 0; i < sizeof(l); i++) {
		d.insertFront(l.getData(i));
	}

	cout << "Displaying the contents of the circular array." << endl;
	cout << d << endl;

	cout << "Checking if the array is full." << endl;
	cout << d.isFull() << endl;

	system("pause");
}