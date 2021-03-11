// PointerAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printReverseString(const char* charArrayPointer, const unsigned arraySize);
void printStringWithPointers(const char* charArrayPointer, const unsigned arraySize);

int main()
{
    char values[] = "john doe";
    //cout << sizeof values << "\n\n";
    //cout << sizeof &values << "\n\n";

    printStringWithPointers(values, sizeof values);
    cout << "\n";
    printReverseString(values, sizeof values);
    cout << "\n";
    printStringWithPointers(values, sizeof values);

}

void printReverseString(const char* charArrayPointer, const unsigned charArraySize) {
    // move pointer to last element
    charArrayPointer += (charArraySize -1) ;

    // loop will count down from size of array
    unsigned iterator = charArraySize;

    for (unsigned i{ iterator }; i > 0; i--) {
        cout << *charArrayPointer;
        charArrayPointer--;
    }

}

void printStringWithPointers(const char* charArrayPointer, const unsigned arraySize) {
    for (unsigned i{ 0 }; i < arraySize; i++) {
        cout << *charArrayPointer;
        charArrayPointer++;
    }
}


