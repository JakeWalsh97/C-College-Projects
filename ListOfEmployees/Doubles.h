#include <iostream>

using namespace std;

#ifndef DOUBLES_H
#define DOUBLES_H

class Doubles {
	friend class DoubleListNode;
public:
	Doubles();
	Doubles(double);
	double getData();
private:
	Doubles dou;
	double data;
};

#endif