#include "ListOfCustomers.h"
#include "Customers.h"
#include "CustomerListNode.h"
#include "StackOfCustomers.h"

using namespace std;

CustomerListNode::CustomerListNode(string n, int a, string p, string acc, double b) {
	cust.setName(n);
	cust.setAge(a);
	cust.setPhone(p);
	cust.setAccNum(acc);
	cust.setBalance(b);
}

CustomerListNode::~CustomerListNode()
{
	
}

