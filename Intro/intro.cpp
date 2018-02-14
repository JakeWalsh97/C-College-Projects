#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std; //I don't have to type std:: before cout

int main() {

	cout << "Hello World" << endl;

	const double PI = 3.1415926535;

	char myGrade = 'A';

	bool isHappy = true;

	int myAge = 39;

	float favNum = 3.14592;

	double otherFavNum = 1.6180339887;

	cout << "Favourite Number " << favNum << endl;

	cout << "Size of int " << sizeof(myAge) << endl; //Use sizeof() to get size of variable in memory
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherFavNum) << endl;

	int largestInt = 2147483647;

	cout << "Largest Int " << largestInt << endl;

	int five = 5;

	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	cout << "Before Casting: 4 / 5 = " << 4 / 5 << endl;
	cout << "After Casting: 4 / 5 = " << (float)4 / 5 << endl; //casting

	cout << "\n========================================\nIf Statements\n" << endl;

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if (age >= 1 && age < 16) {
		cout << "You can't drive" << endl;
	}

	else if (!isNotIntoxicated) {
		cout << "You can't drive" << endl;
	}

	else if ((age >= 80 && age > 100) || (age - ageAtLastExam > 5)) {
		cout << "You can't drive" << endl;
	}

	else {
		cout << "You can drive" << endl;
	}

	cout << "\n========================================\nSwitch Statements\n" << endl;

	int greetingOption = 2;

	switch (greetingOption) {

	case 1:
		cout << "bonjour" << endl;
		break;

	case 2:
		cout << "hola" << endl;
		break;

	case 3:
		cout << "hello" << endl;
		break;

	default:
		cout << "Hello" << endl;
	}

	cout << "\n========================================\nArrays\n" << endl;

	int myFavNums[5];

	int badNums[5] = { 4, 13, 14, 24, 34 };

	cout << "Bad Number 1: " << badNums[0] << endl;

	char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
						{'B', 'a', 'n', 'a', 's'}};

	cout << "2nd letter in 2nd array " << myName[1][1] << endl;

	myName[0][2] = 'e';

	cout << "New Value " << myName[0][2] << endl;

	cout << "\n========================================\nFor Loops\n" << endl;

	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	for (int j = 0; j < 5; j++) {
		for (int k = 0; k < 5; k++) {
			cout << myName[j][k];
		}

		cout << endl;
	}

	cout << "\n========================================\nWhile Loops\n" << endl;

	int randNum = (rand() % 100) + 1;
	while (randNum != 100) {
		cout << randNum << ", ";

		randNum = (rand() % 100) + 1;
	}

	cout << endl;

	int index = 1;

	while (index <= 10) {
		cout << index << endl;
		index++;
	}

	string numberGuessed;
	int intNumberGuessed = 0;

	do {

		cout << "Guess between 1 and 10: ";

			getline(cin, numberGuessed);

		intNumberGuessed = stoi(numberGuessed);

		cout << intNumberGuessed << endl;

	} while (intNumberGuessed != 4);

	cout << "You win" << endl;

	cout << "\n========================================\nStrings\n" << endl;
	
	char happyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0' };
	string birthdayString = "Birthday";
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name: ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout << "What is eulers constant? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if (eulerGuessDouble == eulersConstant) {
		cout << "You are right" << endl;
	}
	else {
		cout << "You are wrong" << endl;
	}

	cout << "Size of String " << eulerGuess.size() << endl;
	cout << "Is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;

	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Walsh", 0);
	cout << "Index for last name " << lastNameIndex << endl;

	yourName.insert(5, " Robert ");
	cout << yourName << endl;

	yourName.erase(6, 7);
	cout << yourName << endl;

	yourName.replace(6, 5, "Monks");
	cout << yourName << endl;

	cout << "\n========================================\nVectors\n" << endl;
	vector <int> lotteryNumVect(10);
	int lotteryNumArray[5] = { 4, 13, 14, 24, 34 };

	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);

	lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);

	cout << lotteryNumVect.at(2) << endl;

	lotteryNumVect.push_back(64);

	cout << "Final Value " << lotteryNumVect.back();

	lotteryNumVect.pop_back();

	cin.get();

	return 0;

}