#include <iostream>

using namespace std;

#ifndef LISTOFDOUBLES_H
#define LISTOFDOUBLES_H

class ListOfDoubles {
	friend class Doubles;
	friend class DoubleListNode;
	friend class StackOfDoubles;
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void displayList() const;
	void deleteMostRecent();
	double deleteDouble(int pos);
	ListOfDoubles(const ListOfDoubles &l);
	const ListOfDoubles& ListOfDoubles::operator=(const ListOfDoubles&);
	friend ostream & operator<<(ostream & out, ListOfDoubles & l);
private:
	DoubleListNode* head;
};

#endif
