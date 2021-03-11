// Chapter06_25_Recursive-Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long); // function prototype

int main()
{
    // calculate factorials for 0-10
    for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

// recursive definition
unsigned long factorial(unsigned long number) {
    // base case
    if (number <= 1) {
        return 1;
    }
    // recursive case
    else {
        return number * factorial(number - 1);
    }

}







