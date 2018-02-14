#include <iostream>
#include <ostream>

using namespace std;

#ifndef STACKOFDOUBLES_H
#define STACKOFDOUBLES_H

class StackOfDoubles {
	friend class ListOfDoubles;
public:
	StackOfDoubles();
	~StackOfDoubles();
	void push(double val);
	void pop();
	double top();
	friend ostream & operator<<(ostream &out, const StackOfDoubles &stackobj);
	StackOfDoubles(StackOfDoubles &s);
	const StackOfDoubles& StackOfDoubles::operator=(StackOfDoubles&);

private:
	ListOfDoubles ld;
};

#endif

