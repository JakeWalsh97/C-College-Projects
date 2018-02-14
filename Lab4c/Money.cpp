#include "Money.h"

double operator-(const Money & first, const Money & second)
{
	return (first.euro - second.euro);
}

double operator*(const Money & first, const int & n)
{
	return (first.euro * n);
}

double operator/(const Money & first, const double & n)
{
	return (first.euro / n);
}

ostream & operator<<(ostream & outputStream, const Money & aMoney)
{
	outputStream << aMoney;
	return outputStream;
}

istream & operator>>(istream & inputStream, Money & aMoney)
{
	inputStream >> aMoney.euro;
	return inputStream;
}

bool operator==(const Money & first, const Money & second)
{
	bool equalTo = false;
	if (first.euro == second.euro) {
		equalTo = true;
		return equalTo;
	}
	else {
		return false;
	}
}

bool operator<(const Money & first, const Money & second)
{
	bool lessThan = false;
	if (first.euro < second.euro) {
		lessThan = true;
		return lessThan;
	}
	else {
		return false;
	}
}

bool operator>(const Money & first, const Money & second)
{
	bool greaterThan = false;
	if (first.euro > second.euro) {
		greaterThan = true;
		return greaterThan;
	}
	else {
		return false;
	}
}

Money::Money()
{
}

Money::Money(int &e, int &c)
{
	euro = e;
	cent = c;
}

int Money::getEuro()
{
	return euro;
}

int Money::getCent()
{
	return cent;
}