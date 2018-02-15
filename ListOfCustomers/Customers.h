#include <iostream>
#include <string>

using namespace std;

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

class Customers {
	friend class StackOfCustomers;
public:
	Customers();
	Customers(string, int, string, string, double);
	string getName();
	int getAge();
	string getPhone();
	string getAccNum();
	double getBalance();
	void setName(string);
	void setAge(int);
	void setPhone(string);
	void setAccNum(string);
	void setBalance(double);
private:
	string name;
	int age;
	string phone;
	string accNum;
	double balance;
};

#endif;
