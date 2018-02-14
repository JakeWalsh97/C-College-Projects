#include "Doubles.h"
#include "ListOfDoubles.h"
#include "DoubleListNode.h"
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
