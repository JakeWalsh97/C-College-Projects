#include <iostream>
#include <ostream>
#include <array>

using namespace std;

#ifndef DEQUE_H
#define DEQUE_H

class Deque
{
	friend class ListOfInts;
public:
	Deque();
	bool isEmpty();
	bool isFull();
	bool insertFront(int);
	bool removeFront(int&);
	bool insertBack(int);
	bool removeBack(int &);
	friend ostream & operator<<(ostream& ostr, const Deque&);

private:
	ListOfInts li;
	int intArr[10];
	int head;
	int tail;
};

#endif

