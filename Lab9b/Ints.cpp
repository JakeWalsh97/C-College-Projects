#include "ListOfInts.h"
#include "Ints.h"
#include "IntNode.h"
#include "Deque.h"
#include <iostream>

using namespace std;

Ints::Ints()
{
	data = 0;
}

Ints::Ints(int d)
{
	data = d;
}

int Ints::getData()
{
	return data;
}

void Ints::setData(int d)
{
	data = d;
}
