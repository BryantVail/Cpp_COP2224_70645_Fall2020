// Chapter06_17_PassingArgumentsByValueAndReference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int squareByValue(int);
int squareByReference(int&);

int main()
{
    int x{ 2 };
    int z{ 4 };

    // squareByValue
    cout << "x = " << x << "Before squareByValue\n";
    cout << "Value returned by squareByValue: "
        << squareByValue(x) << endl;

    // squareByReference
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;

}

// squareByValue: multiplies 'number' by itself, stores the result in 'number'
// and returns the new value of 'number'
int squareByValue(int number) {
    return number *= number;
}

// squareByReference: multiplies 'numberRef' by itself
//  > stores the result in the variable to which 'numberRef' refers in function 'main'
int squareByReference(int& numberRef) {
    return numberRef *= numberRef;
}

















