#include <iostream>
#include <fstream>

using namespace std;

void purchase(double&, double&, double&);
void increasePrice(double&, double&, double&);

int main() {
	double widget = 10, gadget = 15, toggle = 12;
	int choice = 0;

	cout << "Items Price List" << endl;
	cout << "Widget: $" << widget << endl;
	cout << "Gadget: $" << gadget << endl;
	cout << "Toggle: $" << toggle << endl;

	while (choice != 3) {
		cout << "\nPlease choose one of the below options." << endl;
		cout << "Press 1 to Purchase" << endl;
		cout << "Press 2 to Increase a Price" << endl;
		cout << "Press 3 to Exit application" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			purchase(widget, gadget, toggle);
			break;
		case 2:
			increasePrice(widget, gadget, toggle);
			break;
		case 3:
			break;
		default: cout << "Invalid entry entered.\n" << endl;
			choice = 0;
		}
	}

	ofstream writer2("prices.txt");
	if (!writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		cout << "\nFinal prices:" << endl;
		writer2 << "Widget:\t $" << widget << endl;
		writer2 << "Gadget:\t $" << gadget << endl;
		writer2 << "Toggle:\t $" << toggle << endl;

		writer2.close();
	}

	char letter;

	ifstream reader("prices.txt");

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
	system("pause");
}

void purchase(double &widget, double &gadget, double &toggle) {
	int widgetQty = 0, gadgetQty = 0, toggleQty = 0;
	double total = 0;

	cout << "Enter the quantity of each item you wish to purchase: " << endl;
	cout << "Widget: " << endl;
	cin >> widgetQty;
	total += widget * widgetQty;
	cout << "Gadget: " << endl;
	cin >> gadgetQty;
	total += gadget * gadgetQty;
	cout << "Toggle: " << endl;
	cin >> toggleQty;
	total += toggle * toggleQty;

	cout << "Total Cost of purchase: $" << total << endl;


}

void increasePrice(double &widget, double &gadget, double &toggle) {
	int choice = 0;
	double percentageIncrease = 0;
	while (choice != 4) {
		cout << "Which item would you like to update: " << endl;

		cout << "Press 1 to update Widget" << endl;
		cout << "Press 2 to update Gadget" << endl;
		cout << "Press 3 to update Toggle" << endl;
		cout << "Press 4 to exit this menu" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Please enter the percentage increase in price of the Widget: " << endl;
			cin >> percentageIncrease;
			(widget = (double)widget * (1 + percentageIncrease / 100));
			percentageIncrease = 0;
			break;
		case 2:
			cout << "Please enter the percentage increase in price of the Gadget: " << endl;
			cin >> percentageIncrease;
			(gadget = (double)gadget * (1 + percentageIncrease / 100));
			percentageIncrease = 0;
			break;
		case 3:
			cout << "Please enter the percentage increase in price of the Toggle: " << endl;
			cin >> percentageIncrease;
			(toggle = (double)toggle * (1 + percentageIncrease / 100));
			percentageIncrease = 0;
			break;
		case 4:
			break;
		default: cout << "Invalid entry entered.\n" << endl;
			choice = 0;
		}
	}

	cout << "New Prices: " << endl;
	cout << "Widget: $" << widget << endl;
	cout << "Gadget: $" << gadget << endl;
	cout << "Toggle: $" << toggle << endl;
}