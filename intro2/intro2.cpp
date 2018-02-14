#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0) {
	int combinedValue = firstNum + secondNum;
	return combinedValue;
}

int addNumbers(int firstNum, int secondNum, int thirdNum) {
	int combinedValue = firstNum + secondNum + thirdNum;
	return combinedValue;
}

int getFactorial(int number) {
	int sum;
	if (number == 1) {
		sum = 1;
	}
	else sum = getFactorial(number - 1) * number;
	return sum;

	/*getFactorial(2) [Returns 2] * 3 = 6
	getFactorial(1)[Returns 1] * 2*/
}

void makeMeYoung(int* age) {

	cout << "I used to be " << *age << endl;
	*age = 19;

}

void actYourAge(int& age) {

	age = 39;

}

//Classes, public, private and static variables, getters, setters and constructors

class Animal {

  private:
	int height;
	int weight;
	string name;

	static int numOfAnimals;

  public:
	  int getHeight() {
		  return height;
	  }

	  int getWeight() {
		  return weight;
	  }

	  string getName() {
		  return name;
	  }

	  void setHeight(int cm) {
		  height = cm;
	  }

	  void setWeight(int kg) {
		  weight = kg;
	  }

	  void setName(string animalName) {
		  name = animalName;
	  }

	  Animal(int height, int weight, string name);

	  Animal(int, int string);

	  ~Animal();

	  Animal();

	  static int getNumberOfAnimals() {
		  return numOfAnimals;
	  }

	  void toString();

};

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, string name) {

	this->height = height;
	this->weight = weight;
	this->name = name;
	Animal::numOfAnimals++;

}

Animal::Animal(int, int string)
{
}

Animal::~Animal() {

	cout << "Animal " << this->name << " destroyed" << endl;

}

Animal::Animal() {

	Animal::numOfAnimals++;

}

void Animal::toString() {

	cout << this->name << " is " << this->height << "cm tall and " << this->weight << " kg in weight" << endl;
}

class Dog : public Animal {

private:
	string sound = "Woof";

public:
	void getSound() {
		cout << sound << endl;
	}

	Dog(int, int, string, string);

	Dog() : Animal() {

	}

	void toString();

};

Dog::Dog(int height, int weight, string name, string bark) :
	Animal(height, weight, name) {

	this->sound = bark;
}

int main() {

	Animal fred;
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	cout << "\n=====================================\nClasses, Attributes and Methods\n" << endl;

	cout << fred.getName() << " is " << fred.getHeight() << " cm tall and " << fred.getWeight() <<
		" kg in weight" << endl;

	Animal tom(36, 15, "Tom");

	cout << tom.getName() << " is " << tom.getHeight() << " cm tall and " << tom.getWeight() <<
		" kg in weight" << endl;

	Dog spot(38, 16, "Spot", "Woof");

	cout << "Number of animals " << Animal::getNumberOfAnimals() << endl;

	cout << "\n=====================================\nFunctions\n" << endl;
	cout << addNumbers(1) << endl;
	cout << addNumbers(1, 5, 6) << endl;

	cout << "\n=====================================\nRecursive Functions\n" << endl;
	cout << "The factorial of 3 is " << getFactorial(3) << endl;

	cout << "\n=====================================\nFile I/O\n" << endl;
	string steveQuote = "A day without sunshine is like, you know, night";

	ofstream writer("steveQuote.txt");

	if (! writer) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer << steveQuote << endl;

		writer.close();
	}

	ofstream writer2("steveQuote.txt", ios::app);//appending text to the end of the file

	if (! writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "\n - Steve Martin" << endl;

		writer2.close();
	}

	char letter;

	ifstream reader("steveQuote.txt");

	if (! reader) {

		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		for (int i = 0; !reader.eof(); i++){
		reader.get(letter);
		cout << letter;
		}
		cout << endl;
		reader.close();
	}

	cout << "\n=====================================\nException Handling\n" << endl;
	int number = 0;

	try {
		if (number != 0) {
			cout << 2 / number << endl;
		}
		else {
			throw number;
		}

	}

	catch (int number) {
		cout << number << " is not valid" << endl;
	}

	cout << "\n=====================================\nPointers\n" << endl;
	int myAge = 20;
	cout << "my age is located at " << &myAge << endl;

	int* agePtr = &myAge;

	cout << "Address of pointer " << agePtr << endl;

	cout << "Data at memory address " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 34};

	int* numArrayPtr = badNums;
	cout << "Address  " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++;

	cout << "Address " << badNums << " Value " << *badNums << endl;

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " years old now" << endl;

	int& ageRef = myAge;

	cout << "myAge: " << myAge << endl;

	ageRef++;
	cout << "My age: " << myAge << endl;

	actYourAge(ageRef);

	cout << "My age: " << myAge << endl;

	cin.get();

	return 0;
}
