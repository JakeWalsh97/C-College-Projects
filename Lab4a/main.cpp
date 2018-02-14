#include <iostream>

using namespace std;

void deleteRepeats(char[], int&);

int main() {
	char chars[10], sentinel = '.', input;
	int numberUsed = 0;
	
	cout << "Enter values into the array (Press '.' to stop filling array)." << endl;
	for (int i = 0; i < sizeof(chars); i++) {
		cin >> input;
		if (input != sentinel) {
			chars[i] = input;
			numberUsed++;
		}
		else {
			i = sizeof(chars);
		}

	}

	deleteRepeats(chars, numberUsed);
	system("pause");
}

void deleteRepeats(char chars[], int& numberUsed) {
	int num = numberUsed, start = 0;

	while (start != num)
	{
		char test = chars[start];
		for (int i = start + 1; i <= num; i++)
		{
			if (test == chars[i])
			{
				for (int j = i; j<num; j++)
				{
					chars[j] = chars[j + 1];
				}
				num -= 1;
				start -= 1;
			}
		}
		start += 1;
	}
	numberUsed = num;

	cout << "Contents of array after duplicates are deleted: " << endl;
	for (int i = 0; i < numberUsed; i++) {
		cout << "chars[" << i << "] = " <<  chars[i] << endl;
	}

}