#include "HotDogStand.h"
#include <iostream>

using namespace std;

int main() {
	int id = 0;
	int num = 0;
		cout << "Enter the amount of hot dogs sold by shop number 1: " << endl;
		cin >> num;
		id = 1;
		HotDogStand h1(id, num);

		cout << "Enter the amount of hot dogs sold by shop number 2: " << endl;
		cin >> num;
		id = 2;
		HotDogStand h2(id, num);

		cout << "Enter the amount of hot dogs sold by shop number 3: " << endl;
		cin >> num;
		id = 3;
		HotDogStand h3(id, num);

		cout << "Shop " << h1.getID() << " sold " << h1.getNumSold() << " hot dogs." << endl;
		cout << "Shop " << h2.getID() << " sold " << h2.getNumSold() << " hot dogs." << endl;
		cout << "Shop " << h3.getID() << " sold " << h3.getNumSold() << " hot dogs." << endl;

		cout << "==========================================" << endl;
		cout << "Each shop then sells one more hot dog each." << endl;
		h1.justSold();
		h2.justSold();
		h3.justSold();

		cout << "\nShop " << h1.getID() << " has now sold " << h1.totalSold() << " hot dogs." << endl;
		cout << "Shop " << h2.getID() << " has now sold " << h2.totalSold() << " hot dogs." << endl;
		cout << "Shop " << h3.getID() << " has now sold " << h3.totalSold() << " hot dogs." << endl;

		cout << "==========================================" << endl;
		cout << "Total sold by all shops: " << h1.totalSoldByAll() << endl;
		system("pause");

}