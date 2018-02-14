#include "ListOfDoubles.h"
#include "Doubles.h"
#include "DoubleListNode.h"
#include "StackOfDoubles.h"
#include <iostream>

using namespace std;

Doubles::Doubles()
{
	data = 0.0;
}

Doubles::Doubles(double d)
{
	data = d;
}

double Doubles::getData()
{
	return data;
}

void Doubles::setData(double d)
{
	data = d;
}
