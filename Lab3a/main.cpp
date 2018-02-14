#include <iostream>

using namespace std;

void userInput(int&, int&);
void conversion(int&, int&, char&);
void output(int&, int&, char&, char&);

int main() {
	int hours;
	int mins;
	char type;
	char choice = 'y';

	while (choice == 'y') {
		userInput(hours, mins);
		conversion(hours, mins, type);
		output(hours, mins, type, choice);
	}

	system("pause");
}

void userInput(int& hours, int& mins) {
	cout << "Enter the number of hours: " << endl;
	cin >> hours;

	while (hours > 24 || hours < 0) {
		cout << "Please re-enter hours: " << endl;
		cin >> hours;
	}

	cout << "Enter the number of minutes: " << endl;
	cin >> mins;

	while (mins > 60 || mins < 0) {
		cout << "Please re-enter minutes: " << endl;
		cin >> mins;
	}


}
void conversion(int& hours, int& mins, char& type) {
	if (hours <= 11 && hours >= 0 && mins >= 0 && mins <= 60) {
		type = 'A';
	}

	else if (hours >= 12 && hours <= 23 && mins >= 0 && mins <= 60) {
		hours = hours - 12;
		type = 'P';
	}

}

void output(int& hours, int& mins, char& type, char &choice) {
	cout << hours << ":" << mins << " " << type << ".M" << endl;
	cout << "Would you like to enter another time? (Y/N): " << endl;
	cin >> choice;
	switch (choice)
	{
	case 'y':
	case 'Y':
		choice == 'y';
		break;
	case 'n':
	case 'N':
		choice == 'n';
		break;
	default:  cout << "Invalid data entered.\n" << endl;
		choice = false;
	}
}