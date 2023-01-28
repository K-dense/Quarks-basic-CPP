#include<iostream>

using namespace std;

int squareArea() {
	int side, area;

	cout << "Please add the value of the side of the Square: ";
	cin >> side;
	area = side * 4;
	cout << "The area of the square is: ";
	cout << area;
	return 0;
}