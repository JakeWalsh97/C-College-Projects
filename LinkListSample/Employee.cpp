#include <iostream>
#include <string>
#include "Employee.h"
#include "EmpNode.h"
#include "ListOfEmp.h"

using namespace std;

EmpNode::EmpNode{ int id, string name }
{
	emp.id = id;
	emp.name = name;
	next = NULL;
}

bool EmpList::insertEmp(int id, string name) {
	EmpNode *newNode = new EmpNode(id, name);

	if (!newNode)
		return false;
	newNode->next = head;
	head = newNode;
	return true;
}

bool EmpList::findEmp(int id, const Employee &emp) {
	EmpNode *currentNode = head;
	while (currentNode != 0) {
		if (currentNode->emp.id == id) {
			emp = current->emp;
			return true;
		}
		currentNode = currentNode->next;
	}
	return false;
}