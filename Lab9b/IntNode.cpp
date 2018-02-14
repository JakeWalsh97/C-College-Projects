#include "ListOfInts.h"
#include "Ints.h"
#include "IntNode.h"
#include "Deque.h"
#include <iostream>

using namespace std;


IntNode::IntNode(int i)
{
	in.setData(i);
}


IntNode::~IntNode()
{
}
