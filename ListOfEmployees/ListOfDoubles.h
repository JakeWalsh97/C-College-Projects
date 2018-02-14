#include <iostream>

using namespace std;

#ifndef LISTOFDOUBLES_H
#define LISTOFDOUBLES_H

class ListOfDoubles {
	friend class Doubles;
	friend class DoubleListNode;
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void displayList();
	void deleteMostRecent();
	double deleteDouble(int pos);
private:
	DoubleListNode* head;
};

#endif
