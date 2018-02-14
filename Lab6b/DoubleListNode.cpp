#include "Doubles.h"
#include "ListOfDoubles.h"
#include "DoubleListNode.h"
#include <iostream>

using namespace std;

DoubleListNode::DoubleListNode(double dt)
{
	do.data = dt;
}

DoubleListNode::~DoubleListNode()
{
}
