#include<iostream>

using namespace std;

int abono() {
	float itemCost, result;
	int itemNumber;

	cout << "This program will determine how much a client has to pay for a given number of items they have.";
	cout << "\n";
	cout << "Press 'Enter' to continue";
	cin.get();

	cout << "Please, provide how much the item costs: ";
	cin >> itemCost;
	cout << "\n";

	cout << "Please, provide how many items the client has: ";
	cin >> itemNumber;
	result = itemCost * itemNumber;
	cout << "\n";

	cout << "The client has to pay the following amount: ";
	cout << result;
	cout << "\n";

	cout << "Thank you for using this program, see you later :)";
	return 0;
}