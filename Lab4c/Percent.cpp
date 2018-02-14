#include <iostream>
#include "Percent.h"

using namespace std;

bool operator==(const Percent & first, const Percent & second)
{
	bool equalTo = false;
	if (first.value == second.value) {
		equalTo = true;
		return equalTo;
	}
	else {
		return false;
	}
}

bool operator<(const Percent & first, const Percent & second)
{
	bool lessThan = false;
	if (first.value < second.value) {
		lessThan = true;
		return lessThan;
	}
	else {
		return false;
	}
}

istream & operator>>(istream & inputStream, Percent & aPercent)
{
	inputStream >> aPercent.value;
	return inputStream;
}

ostream & operator<<(ostream & outputStream, const Percent &
	aPercent)
{
	outputStream << aPercent.value;
	return outputStream;
}

double operator+(const Percent & first, const Percent & second)
{
	return (first.value + second.value);
}

double operator-(const Percent & first, const Percent & second)
{
	return (first.value - second.value);
}

double operator*(const Percent & first, const Percent & second)
{
	return (first.value * second.value / 100);
}

Percent::Percent()
{
}

Percent::Percent(int &v)
{
	value = v;
}

int Percent::getValue() {
	return value;
}