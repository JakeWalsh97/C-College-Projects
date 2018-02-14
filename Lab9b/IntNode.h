#include <iostream>

using namespace std;

#ifndef INTNODE_H
#define INTNODE_H

class IntNode {
	friend class ListOfInts;
	friend class Deque;
public:
	IntNode(int);
	~IntNode();
private:
	Ints in;
	IntNode* next;
};

#endif
