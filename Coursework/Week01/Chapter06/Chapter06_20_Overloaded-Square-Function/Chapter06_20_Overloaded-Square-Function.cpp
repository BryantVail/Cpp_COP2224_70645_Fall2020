// Chapter06_20_Overloaded-Square-Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// prototypes

// functions

// square for int values
int square(int x) {
    cout << "square of integer " << x << " is ";
    return x * x;
}

double square(double y) {
    cout << "square of double " << y << " is ";
    return y * y;
}

int main()
{
    cout << square(7); // calls int version
    cout << endl;

    cout << square(7.5);
    cout << endl;
}

















