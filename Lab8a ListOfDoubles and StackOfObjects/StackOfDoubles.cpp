#include "ListOfDoubles.h"
#include "Doubles.h"
#include "DoubleListNode.h"
#include "StackOfDoubles.h"
#include <iostream>
#include <ostream>

using namespace std;

StackOfDoubles::StackOfDoubles()
{
	ld.head = NULL;
}

StackOfDoubles::~StackOfDoubles()
{
	DoubleListNode *tempPtr = ld.head;
	while (ld.head) {
		tempPtr = ld.head;
		ld.head = ld.head->next;
		delete tempPtr;
	}
}

void StackOfDoubles::push(double val)
{
	ld.insert(val);
}

void StackOfDoubles::pop()
{
	ld.deleteMostRecent();
}

double StackOfDoubles::top()
{
	return ld.head->dou.getData();
}

StackOfDoubles::StackOfDoubles(StackOfDoubles & s)
{
	*this = s;
}

const StackOfDoubles & StackOfDoubles::operator=(StackOfDoubles &s)
{
	DoubleListNode *copyPtr = NULL;
	DoubleListNode *origPtr = s.ld.head;

	while (origPtr != NULL) {
		if (ld.head == NULL) {
			ld.head = copyPtr = new DoubleListNode(origPtr->dou.getData());
		}
		else {
			copyPtr->next = new DoubleListNode(origPtr->dou.getData());
			copyPtr = copyPtr->next;
		}
		origPtr = origPtr->next;
	}
	return *this;
}

ostream & operator<<(ostream & out, const StackOfDoubles & stackobj)
{
	stackobj.ld.displayList();
	return out;
}
