#include "ListOfStudents.h"
#include "Student.h"
#include "StudentListNode.h"
#include <iostream>
#include <string>

using namespace std;

ListOfStudents::ListOfStudents()
	:head(NULL)
{}

ListOfStudents::~ListOfStudents()
{
	StudentListNode *tempPtr = new StudentListNode;
	while (head) {
		tempPtr = head;
		head = tempPtr->next;
		delete tempPtr;
	}
}

void ListOfStudents::insertAtStart(string n, int a)
{
	StudentListNode *tempPtr = head;
	tempPtr->stu.setName(n);
	tempPtr->stu.setAge(a);
	tempPtr = tempPtr->next;
	head = tempPtr;
}

void ListOfStudents::deleteAtPos(string name)
{
	StudentListNode *first = head;
	StudentListNode *trail = NULL;

	while (first != NULL && first->stu.getName() != name) {
		first = first->next;
		trail = first;
			if (first->stu.getName() == name) {
				first = first->next;
				trail = first;
				delete first;
		}
	}
}

double ListOfStudents::getAge(string name)
{
	StudentListNode *tempPtr = head;

	while (tempPtr != NULL) {
		if (tempPtr->stu.getName() != name) {
			tempPtr = tempPtr->next;
		}
		else if(tempPtr->stu.getName() == name){
			return tempPtr->stu.getAge();
		}
	}
	return 0.0;
}

void ListOfStudents::display()
{
	StudentListNode *tempPtr = head;

	while (tempPtr != NULL) {
		cout << tempPtr->stu.getName() << "\t" << tempPtr->stu.getAge() << endl;
		tempPtr = tempPtr->next;
	}
}
