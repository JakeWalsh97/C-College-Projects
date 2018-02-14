#include <iostream>

using namespace std;

#ifndef ITINTVECTOR_H
#define ITINTVECTOR_H

class ITIntVector {
public:
	ITIntVector();
	void push_back(int &v);
	const int& at(int &i) const;
	void resize(int i);
	int getSize();
	int getCapacity();

private:
	int *ptrArray;
	int sizeOfArray = 0;
	int capacityOfArray = 10;

};

#endif

