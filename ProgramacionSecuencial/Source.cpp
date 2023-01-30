#include<iostream>
#include "functions.h"

using namespace std;

int main() {
	cout << "Please, type a number and press 'Enter' to select an item from the list: ";
	cout << "\n";
	cout << "\n";
	cout << "0. Area of a Square" << endl << "1. Add and Multiply" << endl << "2. Add and Average" << endl << "3. How much does it cost";
	cout << "\n";
	cout << "\n";

	int choice;
	cout << "Select an item: ";
	cin >> choice;

	switch (choice) {
	case 0:
		squareArea();
		break;
	case 1:
		sumMult();
		break;
	case 2:
		sumAvg();
		break;
	case 3:
		abono();
		break;
	}
}