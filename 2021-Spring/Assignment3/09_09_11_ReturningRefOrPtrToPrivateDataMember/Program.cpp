// 09_09_11_ReturningRefOrPtrToPrivateDataMember.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
#include "Time.h"
using namespace std;


int main()
{
    Time t;

    // init hourRef with bad reference of badSetHour
    unsigned int& hourRef{ t.badSetHour(20) };

    cout
        << "valid hour before modification: "
        << hourRef
        << "\n\n";
    hourRef = 30; // invalid value according to private 'set' functions
    
    cout
        << "\nInvalid hour after modification: "
        << t.getHour();

    // Dangerous: Function call that returns 
    // a reference can be used as an lvalue!
    t.badSetHour(12) = 74;

    cout
        << "\n\n***********************************\n"
        << "!!!!!POOR PROGRAMMING PRACTICE!!!!!\n"
        << "Assigning 74 after passing in 12 to the function\n"
        << "'t.badSetHour(12) = 74;' \t" << t.getHour()
        << "\n***********************************"
        << endl;
}






