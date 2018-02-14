#include "ITIntVector.h"
#include <iostream>

using namespace std;

int main() {
	ITIntVector a;

	cout << "Array Values:" << endl;
	for (int i = 0; i < a.getSize(); i++) {
		cout << "Value " << (i + 1) << ": " << a.at(i) << endl;
	}

	cout << "Size of array: " << a.getSize() << endl;
	cout << "Capacity of Array: " << a.getCapacity() << endl;

	cout << "=========================================" << endl;
	cout << "Add another number to the array: " << endl;
	int num = 0;
	cin >> num;
	a.push_back(num);
	cout << "Number " << num << " added successfully." << endl;

	cout << "=========================================" << endl;
	cout << "New Array Values:" << endl;
	for (int i = 0; i < a.getSize(); i++) {
		cout << "Value " << (i + 1) << ": " << a.at(i) << endl;
	}

	cout << "New Size of array: " << a.getSize() << endl;
	cout << "New Capacity of Array: " << a.getCapacity() << endl;

	cout << "=========================================" << endl;
	cout << "Set a new array size between " << a.getSize()<< " and " << a.getCapacity() << ": " << endl;
	int newSize = 0;
	cin >> newSize;
	a.resize(newSize);

	cout << "New Array Size: " << a.getSize() << endl;
	cout << "New Array Capacity: " << a.getCapacity() << endl;

	cout << "New Array Values:" << endl;
	for (int i = 0; i < a.getSize(); i++) {
		cout << "Value " << (i + 1) << ": " << a.at(i) << endl;
	}

	system("pause");
}