#pragma once
#include <iostream>

using namespace std;

#ifndef INTS_H
#define INTS

class Ints {
	friend class Deque;
public:
	Ints();
	Ints(int);
	int getData();
	void setData(int);
private:
	int data;
};

#endif

