#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Task1 Variables
double straightTime;
int hoursWorked;
double grossPay;
int extraTime;
const int HOURS = 40;
double timeAndHalf;
bool choice = true;
char letter;

//Task 2 Variables
double newAnnualPay;
double newMonthlySalary;
double backPay;
double previousPay;
const double percentPayIncrease = 0.076;

//Task 3 Variables
string name1 = "Jake Walsh";
string name2 = "Declan Thomas";
double oldSalary1;
double oldSalary2;
double newAnnualPay1;
double newAnnualPay2;
double newMonthlySalary1;
double newMonthlySalary2;
double backPay1;
double backPay2;
double backPayTotal = 0;
int numOfEmployees = 0;


int main() {
	//Task 1
	cout << "Task 1\n============================== " << endl;
	while (choice == true) {

		cout << "Enter the number of hours worked: " << endl;
		cin >> hoursWorked;

		cout << "Enter the hourly rate for an employee: " << endl;
		cin >> straightTime;

		if (hoursWorked <= 40) {
			grossPay = straightTime * hoursWorked;
		}
		else if (hoursWorked > 40) {
			extraTime = hoursWorked - 40;
			timeAndHalf = extraTime * (straightTime*1.5);
			grossPay = timeAndHalf + HOURS * straightTime;
		}

		cout << "Gross Pay: $" << grossPay << endl;

		cout << "Would you like to enter details about a different employee? (y/n)" << endl;
		cin >> letter;

		switch (letter)
		{
		case 'y':
		case 'Y':
			choice = true;
			break;
		case 'n':
		case 'N':
			choice = false;
			break;
		default:  cout << "Invalid data entered.\n" << endl;
			choice = false;
		}
	}
	cout << "Thank you! Goodbye." << endl;

	//Task 2
	cout << "\nTask 2\n=============================== " << endl;
	double previousPay = 40000;
	ofstream writer("pay.txt");
	if (!writer) {
		cout << "Error opening file" << endl;
		return -1;
	}

	else {
		writer << previousPay << endl;

		writer.close();
	}

	backPay = previousPay * percentPayIncrease;
	newAnnualPay = previousPay + backPay;
	newMonthlySalary = newAnnualPay / 12;

	ofstream writer2("pay.txt");
	if (!writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "Back Pay:\t $" << backPay << endl;
		writer2 << "Annual Salary:\t $" << newAnnualPay << endl;
		writer2 << "Monthly Salary:\t $" << newMonthlySalary << endl;

		writer2.close();
	}

	char letter;

	ifstream reader("pay.txt");

	if (!reader) {

		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		for (int i = 0; !reader.eof(); i++) {
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}

	//Task 3
	cout << "Task 3\n=============================== " << endl;
	oldSalary1 = 50000;

	backPay1 = oldSalary1 * percentPayIncrease;
	newAnnualPay1 = oldSalary1 + backPay1;
	newMonthlySalary1 = newAnnualPay1 / 12;
	backPayTotal += backPay1;

	ofstream writer3("pay2.txt");
	if (!writer3) {
		cout << "Error opening file" << endl;
		return -1;
	}

	else {
		numOfEmployees++;
		writer3 << "Employee Number: " << numOfEmployees << endl;
		writer3 << "Name:\t\t" << " " << name1 << endl;
		writer3 << "Old Salary:\t $" << oldSalary1 << endl;
		writer3 << "Back Pay:\t $" << backPay1 << endl;
		writer3 << "Annual Salary:\t $" << newAnnualPay1 << endl;
		writer3 << "Monthly Salary:\t $" << newMonthlySalary1 << endl;

		writer3.close();
	}

	oldSalary2 = 60000;

	backPay2 = oldSalary2 * percentPayIncrease;
	newAnnualPay2 = oldSalary2 + backPay2;
	newMonthlySalary2 = newAnnualPay2 / 12;
	backPayTotal += backPay2;

	ofstream writer4("pay2.txt", ios::app);
	if (!writer4) {
		cout << "Error opening file" << endl;
		return -1;
	}

	else {
		numOfEmployees++;
		writer4 << "==========================" << endl;
		writer4 << "Employee Number: " << numOfEmployees << endl;
		writer4 << "Name:\t\t" << " " << name2 << endl;
		writer4 << "Old Salary:\t $" << oldSalary2 << endl;
		writer4 << "Back Pay:\t $" << backPay2 << endl;
		writer4 << "Annual Salary:\t $" << newAnnualPay2 << endl;
		writer4 << "Monthly Salary:\t $" << newMonthlySalary2 << endl;

		writer4 << "==========================" << endl;
		writer4 << "Number of employees: " << numOfEmployees << endl;
		writer4 << "Total back pay: $" << backPayTotal << endl;

		writer4.close();
	}

	char letter2;

	ifstream reader2("pay2.txt");

	if (!reader2) {

		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		for (int i = 0; !reader2.eof(); i++) {
			reader2.get(letter2);
			cout << letter2;
		}
		cout << endl;
		reader2.close();
	}

	system("pause");
}