#pragma once
#include <iostream>

using namespace std;

#ifndef DOUBLES_H
#define DOUBLES_H

class Doubles {
	friend class StackOfDouble;
public:
	Doubles();
	Doubles(double);
	double getData();
	void setData(double);
private:
	double data;
};

#endif

