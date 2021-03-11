// 2ndExProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main()
{
    
    char* buffer = new char[8]; // returns the pointer to the beginning of the block of memory
    memset(buffer, 0, 8);

    char** pointer = &buffer;

    // delete from memory
    delete[] buffer;

    cin.get();
}













