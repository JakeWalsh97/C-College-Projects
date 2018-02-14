#include <iostream>
#include <string>
#include <queue>
#include <list>
#include <vector>
#include "Doubles.h"
#include "DoubleListNode.h"
#include "ListOfDoubles.h"
#include "StackOfDouble.h"

using namespace std;

int main() {
	ListOfDoubles l;
	l.insert(1.5);
	l.insert(3.7);
	l.insert(2.9);
	l.insert(5.2);
	l.insert(4.1);

	cout << "==========================================================================" << endl;
	cout << "Contents of List of Doubles: " << endl;
	l.displayList();

	cout << "==========================================================================" << endl;
	cout << "Deleting last value in list........." << endl;
	l.deleteMostRecent();
	cout << "Contents of new list: " << endl;
	l.displayList();

	cout << "==========================================================================" << endl;
	cout << "Deleting value " << l.deleteDouble(2) << " from list......." << endl;

	cout << "Contents of new list: " << endl;
	l.displayList();

	cout << "==========================================================================" << endl;
	cout << "Created a stack and inserted 5 values" << endl;
	StackOfDoubl s;
	s.push(5.6);
	s.push(4.7);
	s.push(9.1);
	s.push(6.7);
	s.push(2.3);

	cout << "Contents of the stack" << endl;
	cout << s;

	cout << "==========================================================================" << endl;
	cout << "Called the pop method to remove the last value added to the stack" << endl;
	s.pop();
	cout << "New Contents of the stack" << endl;
	cout << s;

	cout << "==========================================================================" << endl;
	cout << "Called the top method to return the first element of the stack" << endl;
	cout << "First value : " << s.top() << endl;

	cout << "==========================================================================" << endl;
	cout << "Created a queue of doubles and added 5 values to the queue" << endl;
	queue <double, list <double> > ls;
	ls.push(3.4);
	ls.push(1.7);
	ls.push(6.9);
	ls.push(7.8);
	ls.push(2.3);

	cout << "Printing out the contents of the queue of doubles" << endl;
	while (!ls.empty()) {
		cout << ls.front() << endl;
		ls.pop();
	}

	cout << "==========================================================================" << endl;
	cout << "Created a PRIORITY queue of doubles and added 5 values to the queue" << endl;
	priority_queue <double, vector <double> > pq;
	pq.push(5.4);
	pq.push(9.1);
	pq.push(7.3);
	pq.push(6.8);
	pq.push(2.5);

	cout << "Printing out the contents of the PRIORITY queue of doubles" << endl;
	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}

	system("pause");

}