// 8-2-1_Declaring-Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define Log(x) cout << x << endl;

int main()
{
    int count{ 8 }; // count is an int, not a pointer
    void* countPointer = &count;


    Log(countPointer);

}











