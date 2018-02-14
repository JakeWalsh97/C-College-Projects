#include "ListOfInts.h"
#include "Ints.h"
#include "IntNode.h"
#include "Deque.h"
#include <iostream>

using namespace std;

using namespace std;

Deque::Deque()
{
	head = NULL;
	tail = NULL;
}

bool Deque::isEmpty()
{
	if (head = tail) {
		cout << "This array is empty." << endl;
		return true;
	}
	else {
		cout << "This array is not empty." << endl;
		return false;
	}
}

bool Deque::isFull()
{
	if (tail = sizeof(intArr)) {
		cout << "This array is not full." << endl;
		return false;
	}
	else {
		cout << "This array is full." << endl;
		return true;
	}
}

bool Deque::insertFront(int val)
{
	if (head <= tail) {
		intArr[head] = val;
		tail++;
		cout << "Value inserted to the front of the array" << endl;
		return true;
	}
	else {
		cout << "Failed to add value to the front of the array" << endl;
		return false;
	}
}

bool Deque::removeFront(int &val)
{
	if (isEmpty() == false) {
		intArr[head] = NULL;
		head++;
		cout << "Removed front value from array." << endl;
		return true;
	}
	else {
		cout << "Failed to remove front value from array." << endl;
		return false;
	}
}

bool Deque::insertBack(int val)
{
	if (tail = sizeof(intArr) && tail > head) {
		intArr[tail] = val;
		tail = head - 1;
		head++;
		cout << "Value inserted to the back of array." << endl;
		return true;
	}

	else if (tail > head) {
		intArr[tail] = val;
		tail++;
		cout << "Value inserted to the back of array." << endl;
		return true;
	}

	else {
		cout << "Failed to add value to the back of the array" << endl;
		return false;
	}
}

bool Deque::removeBack(int &val)
{
	if (isEmpty() == false) {
		intArr[tail] = NULL;
		tail--;
		cout << "Removed final element from array." << endl;
		return true;
	}
	else {
		return false;
	}
}

ostream & operator<<(ostream & ostr, const Deque &d)
{
	d.li.displayList();
	return ostr;
}
