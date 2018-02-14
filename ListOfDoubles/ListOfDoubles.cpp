#include "ListOfDoubles.h"
#include "Doubles.h"
#include "DoubleListNode.h"
#include "StackOfDouble.h"
#include <iostream>

using namespace std;

ListOfDoubles::ListOfDoubles()
	:head(NULL)
{}

ListOfDoubles::~ListOfDoubles()
{
	DoubleListNode *tempPtr = head;
	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void ListOfDoubles::insert(double d)
{
	DoubleListNode *n = new DoubleListNode(d);
	n->next = head;
	head = n;
}

void ListOfDoubles::displayList() const
{
	DoubleListNode *tempPtr = head;
	while (tempPtr != NULL) {
		cout << tempPtr->dou.getData() << endl;
		tempPtr = tempPtr->next;
	}
}

void ListOfDoubles::deleteMostRecent()
{
	if (head != NULL) {
		DoubleListNode *first = head;
		DoubleListNode *trail = NULL;
		while (first->next != NULL)
		{
			trail = first;
			first = first->next;
		}
		trail->next = NULL;
		delete first;
	}
}

double ListOfDoubles::deleteDouble(int pos)
{
	DoubleListNode *first = head;
	DoubleListNode *trail = NULL;

	int i = 1;
	while (1 < (pos - 1)) {
		first = first->next;
		i++;
	}
	trail = first;
	first = first->next;
	if (first->next == NULL) {
		return first->dou.getData();
		delete first;
		trail->next = NULL;
		first = NULL;
	}
	else
	{
		trail->next = first->next;
		return first->dou.getData();
		delete first;
		first = NULL;
	}
}
