// 08-04_Opers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    
    int a{ 7 }; // init with value of 7
    int* aPointer = &a;

    cout
        << "The address of 'a' is:\t\t\t" << &a << "\n"
        << "The value of aPointer is:\t\t" << aPointer << "\n\n"
        << "The value of 'a' is:\t\t\t" << a << "\n"
        << "The value of *aPointer is:\t\t" << *aPointer << endl;


}









