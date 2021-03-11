// 08-05-04_Delaring-Built-In-Array-Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int sumElements(const int values[], const size_t numberOfElements);
int sumElements(const int* values, const size_t numberOfElements);

int main()
{
    
}


int sumElements(const int values[], const size_t numberOfElements) {
    int total{ 0 };
    for (int i{ 0 }; i < numberOfElements; i++) {
        total += values[i];
    }
    return total;
}


