// Chapter06_12_Function-CallStack-in-Action.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int square(int); // prototype for 'square(...)'

int main() {
	int a{ 10 }; // value to square, local to 'main' method

	cout << a << " sqaured: " << square(a) << endl; // display the squared number

}

// returns the square of an integer
int square(int x) { // 'x' is considered local
	return x * x;
}






