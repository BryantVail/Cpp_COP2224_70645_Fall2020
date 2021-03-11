// 08-07_Pass-By-Ref_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void cubeByReference(int*);

int main()
{
    cout << "08-07 Pass-By-Ref with pointer:\n\n\n";
    int number{ 5 };

    cout << "The Original value of 'number' is:\t" << number;
    cout << "\n";

    cubeByReference(&number);

    cout << "The new value of 'number' is:\t\t" << number << endl;
}

void cubeByReference(int* nPointer) {
    *nPointer = *nPointer * *nPointer * *nPointer; 
    //return *nPointer; // may use more memory to return a value

}



