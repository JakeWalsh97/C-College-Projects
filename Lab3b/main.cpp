#include <iostream>
#include <vector>

using namespace std;

void inputAndAverage(double[], int&);
void average5(double*, int&);
void averageN(int&);
bool fillArray(char*);
void outputInReverse(char*, int&);

int main() {
	double nums[5], nums2[5];
	int nums3Size = 5, size = 5, count = 0;
	char c[100], sentinel = '.', input;

	inputAndAverage(nums, size);
	cout << "Enter 5 decimals: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> nums2[i];
	}
	average5(nums2, size);
	averageN(nums3Size);
	cout << "\nFunction 4\n===========================" << endl;
	cout << "Start entering characters into the array: " << endl;
	for (int i = 0; i < 100; i++) {
		cin >> input;
		if (input != sentinel) {
			c[i] = input;
			count++;
		}
		else {
			i = 100;
		}

	}

	fillArray(c);
	cout << "\nFunction 5\n===========================" << endl;
	outputInReverse(c, count);

	system("pause");
}

void inputAndAverage(double nums[], int& size) {
	double total = 0, diff = 0;
	double average = 0;
	cout << "Function 1\n===========================" << endl;
	cout << "Enter 5 decimal values: " << endl;

	for (int i = 0; i < size; i++) {
		cin >> nums[i];
		total += nums[i];
	}
	average = total / size;
	cout << "\nAverage of all numbers: " << average << endl;

	for (int i = 0; i < size; i++) {
		diff = average - nums[i];
		if (diff != 0) {
			cout << diff << " must be added to " << nums[i] << " to get the average." << endl;
		}
		else {
			cout << nums[i] << " equals the average." << endl;
		}
		diff = 0;
	}

}

void average5(double *nums2, int& size) {
	int total = 0, diff = 0;
	double average = 0;
	cout << "Function 2\n===========================" << endl;

	for (int i = 0; i < size; i++) {
		total += nums2[i];
	}

	average = total / size;
	cout << "\nAverage of all numbers: " << average << endl;

	for (int i = 0; i < size; i++) {
		diff = average - nums2[i];
		if (diff != 0) {
			cout << diff << " must be added to " << nums2[i] << " to get the average." << endl;
		}
		else {
			cout << nums2[i] << " equals the average." << endl;
		}
		diff = 0;
	}

	}

void averageN(int &nums3Size) {
	int total = 0, average = 0;
	cout << "Function 3\n===========================" << endl;
	if (nums3Size > INT_MAX) {
		cout << "Invalid array size." << endl;
	}

	else {
		std::vector<int> nums3(nums3Size); 
		nums3 = { 5, 4, 8, 9, 12 };
		
		for (int i = 0; i < nums3Size; i++) {
			total += nums3[i];
		}

		average = total / nums3Size;
		cout << "Array contains numbers: ";
		for (int i = 0; i < nums3Size; i++) {
			cout << nums3[i] << ", ";
		}
		cout << endl;
		cout << "Average of the numbers in the array = " << average << "." << endl;
	}
	
}


bool fillArray(char *c) {
	cout << "The array is full?: " << endl;
	if (sizeof(c) == 100) {
		cout << boolalpha << false << endl;
	}
	else {
		cout << boolalpha << false << endl;
	}

	cout << "Number of entries: " << sizeof(c) << endl;

	return 0;
}

void outputInReverse(char *c, int &count) {
	char reverse[100];
	for (int i = 0; i < count; i++) {
		reverse[i] = c[count - i - 1];
	}
	cout << "Reverse contents of array: " << endl;
	for (int i = 0; i < count; i++) {
		cout << reverse[i] << " ";
	}

	cout << "\n" << endl;
}


