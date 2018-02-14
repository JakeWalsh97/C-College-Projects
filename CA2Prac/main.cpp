#include <iostream>
#include <string>
#include "ListOfStudents.h"
#include "Student.h"
#include "StudentListNode.h"

using namespace std;

int main() {
	ListOfStudents l;
	cout << "Inserting 3 records into the list......." << endl;
	l.insertAtStart("Jake", 20);
	l.insertAtStart("Deco", 21);
	l.insertAtStart("Adam", 23);

	cout << "Contents of the list" << endl;
	l.display();

	cout << "=================================" << endl;
	cout << "Deleting Deco from the list" << endl;
	l.deleteAtPos("Deco");

	cout << "Contents of the list after delete" << endl;
	l.display();

	system("pause");
}