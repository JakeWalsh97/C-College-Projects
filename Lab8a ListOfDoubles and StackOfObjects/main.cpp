#include <iostream>
#include <string>
#include <queue>
#include <list>
#include <vector>
#include "Doubles.h"
#include "DoubleListNode.h"
#include "ListOfDoubles.h"
#include "StackOfDoubles.h"

using namespace std;

int main() {
	ListOfDoubles l;
	l.insert(1.5);
	l.insert(3.7);
	l.insert(2.9);
	l.insert(5.2);
	l.insert(4.1);

	cout << "==========================================================================" << endl;
	cout << "Calling overloaded << operator: " << endl;
	cout << l;

	cout << "==========================================================================" << endl;
	cout << "Calling copy constructor" << endl;
	ListOfDoubles l2(l);
	cout << "Contents of new list: " << endl;
	cout << l2;

	ListOfDoubles l3;
	cout << "==========================================================================" << endl;
	cout << "Calling overloaded == operator" << endl;
	l3 = l2;
	cout << "Contents of new list: " << endl;
	cout << l3;

	cout << "==========================================================================" << endl;
	StackOfDoubles s;
	s.push(5.6);
	s.push(4.7);
	s.push(9.1);
	s.push(6.7);
	s.push(2.3);

	cout << "Contents of the stack\nCalling overloaded == operator" << endl;
	cout << s;

	cout << "==========================================================================" << endl;
	cout << "Calling copy constructor" << endl;
	StackOfDoubles s1(s);

	cout << "Contents of new list: " << endl;
	cout << s1;

	StackOfDoubles s2;
	cout << "==========================================================================" << endl;
	cout << "Calling overloaded == operator" << endl;
	s2 = s1;
	cout << "Contents of new list: " << endl;
	cout << s2;


	system("pause");

}