#include <iostream>
using namespace std;
class Percent
{
public:
	friend bool operator ==(const Percent& first,
		const Percent& second);
	friend bool operator <(const Percent& first,
		const Percent& second);
	Percent();
	Percent(int&);
	friend istream& operator >>(istream& inputStream,
		Percent& aPercent);
	friend ostream& operator <<(ostream& outputStream,
		const Percent& aPercent);
	friend double operator +(
		const Percent& first, const Percent& second);
	friend double operator -(
		const Percent& first, const Percent& second);
	friend double operator *(
		const Percent& first, const Percent& second);
	int getValue();
private:
	int value;
};