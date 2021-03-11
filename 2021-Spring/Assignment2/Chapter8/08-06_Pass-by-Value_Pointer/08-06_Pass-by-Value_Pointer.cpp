// 08-06_Pass-by-Value_Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int cubeByValue(int);

int main()
{

    int number{ 5 };

    cout << "The Original value of number is:\t" << number << "\n\n"; 

    number = cubeByValue(number);

    cout << "The new value of number is:\t\t" << number << endl;
    
}

int cubeByValue(int n) {
    return n * n * n;
}


