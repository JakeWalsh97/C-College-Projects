#include "ITIntVector.h"
#include <stdlib.h>

ITIntVector::ITIntVector() {
	sizeOfArray = 10;
	capacityOfArray = 20;
	ptrArray = new int[capacityOfArray];
	for (int i = 0; i < sizeOfArray; i++) {
		ptrArray[i] = rand() % 100 + 1;
	}
}

void ITIntVector::push_back(int &v) {
	if (sizeOfArray == capacityOfArray) {
		int i = sizeOfArray;
		resize(sizeOfArray + 10);
		ptrArray[i] = v;
	}

	else {
		ptrArray[sizeOfArray] = v;
		sizeOfArray++;
	}

	capacityOfArray += 2;
}

const int & ITIntVector::at(int &i) const
{
	return ptrArray[i];
}

void ITIntVector::resize(int s) {
	int oldSize = sizeOfArray;
	sizeOfArray = s;
	capacityOfArray = s * 2;
	int *temp;
	temp = new int[capacityOfArray];

	for (int i = 0; i < s; i++) {
		if (i < oldSize) {
			temp[i] = ptrArray[i];
		}
		else {
			temp[i] = 0;
		}
	}
	ptrArray = temp;
}

int ITIntVector::getSize()
{
	return sizeOfArray;
}

int ITIntVector::getCapacity()
{
	return capacityOfArray;
}

