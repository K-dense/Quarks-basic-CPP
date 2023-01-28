#include<iostream>

using namespace std;

int sumMult() {
	int num1, num2, num3, num4, add, mult;

	cout << "This program will accept 4 numbers. It will add the first two numbers and it'll multiply the last two";
	cout << "\n";
	cout << "Press 'Enter' to continue";
	cin.get();

	cout << "Please, provide 4 numbers in sequence. Press 'Enter' between each number: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	add = num1 + num2;
	mult = num3 + num4;
	cout << "\n";

	cout << "Thank you, please find the results below.";
	cout << "\n";

	cout << "The sum of the first two numbers is: ";
	cout << add;
	cout << "\n";

	cout << "The multiplication of the last two numbers is: ";
	cout << mult;
	cout << "\n";

	cout << "Thank you for using this program, see you later :)";
	return 0;
}