#include <iostream>

using namespace std;

#ifndef LISTOFINTS_H
#define LISTOFINTS_H

class ListOfInts {
	friend class Ints;
	friend class IntNode;
	friend class Deque;
public:
	ListOfInts();
	~ListOfInts();
	void insert(int);
	void displayList() const;
	void deleteMostRecent();
	int getData(int &pos);
private:
	IntNode* head;
};

#endif
