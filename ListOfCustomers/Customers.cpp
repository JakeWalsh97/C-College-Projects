#include "ListOfCustomers.h"
#include "Customers.h"
#include "CustomerListNode.h"
#include "StackOfCustomers.h"

using namespace std;

Customers::Customers()
{
	name = " ";
	age = 0;
	phone = " ";
	accNum = " ";
	balance = 0.0;
}

Customers::Customers(string n, int a, string p, string acc, double b)
{
	name = n;
	age = a;
	phone = p;
	accNum = acc;
	balance = b;
}

string Customers::getName()
{
	return name;
}

int Customers::getAge()
{
	return age;
}

string Customers::getPhone()
{
	return phone;
}

string Customers::getAccNum()
{
	return accNum;
}

double Customers::getBalance()
{
	return balance;
}

void Customers::setName(string n)
{
	name = n;
}

void Customers::setAge(int a)
{
	age = a;
}

void Customers::setPhone(string p)
{
	phone = p;
}

void Customers::setAccNum(string acc)
{
	accNum = acc;
}

void Customers::setBalance(double b)
{
	balance = b;
}








