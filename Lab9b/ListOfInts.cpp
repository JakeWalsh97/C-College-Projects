#include "ListOfInts.h"
#include "Ints.h"
#include "IntNode.h"
#include "Deque.h"
#include <iostream>

using namespace std;

ListOfInts::ListOfInts()
	:head(NULL)
{}

ListOfInts::~ListOfInts()
{
	IntNode *tempPtr = head;
	while (head) {
		tempPtr = head;
		head = head->next;
		delete tempPtr;
	}
}

void ListOfInts::insert(int d)
{
	IntNode *n = new IntNode(d);
	n->next = head;
	head = n;
}

void ListOfInts::displayList() const
{
	IntNode *tempPtr = head;
	while (tempPtr != NULL) {
		cout << tempPtr->in.getData() << endl;
		tempPtr = tempPtr->next;
	}
}

void ListOfInts::deleteMostRecent()
{
	if (head != NULL) {
		IntNode *first = head;
		IntNode *trail = NULL;
		while (first->next != NULL)
		{
			trail = first;
			first = first->next;
		}
		trail->next = NULL;
		delete first;
	}
}

int ListOfInts::getData(int &p)
{
	IntNode *tempPtr = head;
	return tempPtr->in.getData();
}
