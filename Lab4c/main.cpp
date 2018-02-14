#include <iostream>
#include "Percent.h"
#include "Money.h"

using namespace std;

int main() {
	int value = 50, value2 = 80;
	bool equalTo = false;
	double add = 0.0, sub = 0.0, mult = 0.0;
	Percent p1(value);
	Percent p2(value2);
	cout << "Percent 1: " << p1.getValue() << "%" << endl;
	cout << "Percent 2: " << p2.getValue() << "%" << endl;
	cout << "===========================" << endl;

	cout << "Output Stream" << endl;
	cout << p1 << "%" << endl;
	cout << "Input Stream" << endl;
	cin >> p2;

	cout << "===========================" << endl;
	cout << "Testing Equal to operator" << endl;
	equalTo = p1 == p2;
	if (equalTo == true) {
		cout << "Values are equal" << endl;
	}
	else if (equalTo == false) {
		cout << "Values are not equal" << endl;
	}

	cout << "===========================" << endl;
	cout << "Testing add, subtract and multiply" << endl;
	add = p1 + p2;
	sub = p1 - p2;
	mult = p1 * p2;
	cout << p1.getValue() << "% + " << p2.getValue() << "% = " << add << "%" << endl;
	cout << p1.getValue() << "% - " << p2.getValue() << "% = " << sub << "%" << endl;
	cout << p1.getValue() << "% * " << p2.getValue() << "% = " << mult << "%" << endl;

	cout << "===========================" << endl;
	cout << "Creating Money Objects" << endl;
	int euro1 = 100, cent1 = 50, euro2 = 50, cent2 = 80, val = 10;
	double multiply = 0.0, divide = 0.0, subtract = 0.0, val2 = 5;
	bool equal = false, greaterThan = false;
	Money m1(euro1, cent1);
	Money m2(euro2, cent2);
	cout << "Money Object 1 Value: " << m1.getEuro() << " euro " << m1.getCent() << " cent." << endl;
	cout << "Money Object 2 Value: " << m2.getEuro() << " euro " << m2.getCent() << " cent." << endl;

	cout << "Output Stream" << endl;
	cout << m1.getEuro() << " euro ";
	cout << m1.getCent() << " cent " << endl;
	cout << m2.getEuro() << " euro ";
	cout << m2.getCent() << " cent " << endl;
	cout << "Input Stream" << endl;
	cin >> m1;
	cin >> m2;

	cout << "===========================" << endl;
	cout << "Testing multiply, divide and subtract" << endl;
	multiply = m1 * val;
	divide = m1 / val2;
	subtract = m1 - m2;

	cout << m1.getEuro() << " euro multiplied by " << val << " = " << multiply << endl;
	cout << m1.getEuro() << " euro divided by " << val2 << " = " << divide << endl;
	cout << m1.getEuro() << " euro minus " << m2.getEuro() << " = " << subtract << endl;

	cout << "===========================" << endl;
	cout << "Testing Equal to operator" << endl;
	equal = m1 == m2;
	if (equal == false) {
		cout << "Values are not equal" << endl;
		greaterThan = m1 > m2;
		if (greaterThan == true) {
			cout << m1.getEuro() << " euro is greater than " << m2.getEuro() << " euro." << endl;
		}
		else {
			cout << m1.getEuro() << " euro is less than " << m2.getEuro() << " euro." << endl;
		}
	}
	else {
		cout << "Values are equal" << endl;
	}

	system("pause");
}