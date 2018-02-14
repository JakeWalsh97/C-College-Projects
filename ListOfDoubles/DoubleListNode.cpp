#include "ListOfDoubles.h"
#include "Doubles.h"
#include "DoubleListNode.h"
#include "StackOfDouble.h"
#include <iostream>

using namespace std;

DoubleListNode::DoubleListNode(double dt)
{
	dou.setData(dt);
}

DoubleListNode::~DoubleListNode()
{
}
