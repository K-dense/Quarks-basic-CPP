#include<iostream>

using namespace std;

int sumAvg() {
	int num1, num2, num3, num4, add, average;

	cout << "This program accepts 4 numbers and will return them added and the average as well";
	cout << "\n";
	cout << "Press 'Enter' to continue";
	cin.get();

	cout << "Please, provide 4 numbers in sequence. Press 'Enter' between each number: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	add = num1 + num2 + num3 + num4;
	average = add / 4;
	cout << "\n";

	cout << "Thank you, please find the results below.";
	cout << "\n";

	cout << "The sum of the numbers is: ";
	cout << add;
	cout << "\n";

	cout << "The average is: ";
	cout << average;
	cout << "\n";

	cout << "Thank you for using this program, see you later :)";
	return 0;
}