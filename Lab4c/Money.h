#pragma once
#include <iostream>

using namespace std;

class Money {
public:
	friend double operator -(const Money& first, const Money& second);
	friend double operator *(const Money& first, const int&);
	friend double operator /(const Money& first, const double&);
	friend ostream& operator <<(ostream& outputStream,
		const Money& aMoney);
	friend istream& operator >>(istream& inputStream,
		Money& aMoney);
	friend bool operator ==(const Money& first,
		const Money& second);
	friend bool operator <(const Money& first,
		const Money& second);
	friend bool operator >(const Money& first,
		const Money& second);
	Money();
	Money(int&, int&);
	int getEuro();
	int getCent();
private:
	int euro = 0;
	int cent = 0;
};
