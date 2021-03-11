// Pointers_Cherno-Youtube_DTxHyVn0ODg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl

int main()
{
    int variable = 8; // this has a memory address

    void* nullPointer = 0; // memory address of 0/nullptr, not valid
    void* variablePointer = &variable;
    int* intPointer = (int*)&variable;
    cin.get();
    cout << "value@intPointer:\t" << *intPointer << endl;
    cout << "value of intPointer:\t" << intPointer << endl;

    // write & read to memory locations
    // *variablePointer = 10; // compiler cannot write to a void type pointer; doesn't know how to write

    *intPointer = 10;
    LOG(variable);



}















