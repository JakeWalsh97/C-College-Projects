#include <iostream>

using namespace std;

int euros;
int numOfBars;
int numOfCoupons;
int couponsRedeemed;

int main() {
	cout << "How many Euros will you be spending?: " << endl;
	cin >> euros;

	for (int i = 0; i < euros; i++) {
		numOfBars++;
		numOfCoupons++;

		if (numOfCoupons == 7) {
			couponsRedeemed += 7;
			numOfCoupons = 0;
			numOfCoupons++;
			numOfBars++;
		}
	}

	cout << "Number of chocolate bars collected: " << numOfBars << endl;
	cout << "Number of coupons redeemed: " << couponsRedeemed << endl;
	cout << "Number of leftover coupons: " << numOfCoupons << endl;

	system("pause");
}