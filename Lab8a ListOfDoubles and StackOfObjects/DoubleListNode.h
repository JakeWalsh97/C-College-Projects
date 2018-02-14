#include <iostream>

using namespace std;

#ifndef DOUBLELISTNODE_H
#define DOUBLELISTNODE_H

class DoubleListNode {
	friend class ListOfDoubles;
	friend class StackOfDoubles;
public:
	DoubleListNode(double);
	~DoubleListNode();
private:
	Doubles dou;
	DoubleListNode* next;
};

#endif
