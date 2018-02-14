#include <iostream>

using namespace std;

#ifndef DOUBLELISTNODE_H
#define DOUBLELISTNODE_H

class DoubleListNode {
	friend class ListOfDoubles;
public:
	DoubleListNode(double);
	~DoubleListNode();
private:
	Doubles do;
	DoubleListNode* next;
};

#endif
