// Chapter06_19_UnaryScopeResolutionOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int number{ 7 }; // global variable bc its outside of the function call

int main()
{
    double number{ 10.5 }; // local variable

    // display values of local and global variables
    cout
        << "Local double value of number:\n\t" << number
        << "\nGlobal int value of number =\n\t" << ::number << endl;

}









