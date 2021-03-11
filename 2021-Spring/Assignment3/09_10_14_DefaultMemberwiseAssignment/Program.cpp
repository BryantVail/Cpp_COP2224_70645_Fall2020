// 09_10_14_DefaultMemberwiseAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1{ 7, 4, 2004 };
    Date date2;

    cout
        << "date1 = "
        << date1.toString() << "\n"
        << "date2 = "
        << date2.toString() << "\n\n";

    date2 = date1; // default memberwise assignment

    cout
        << "after default memberwise assignment:\n\t"
        << date2.toString() 
        << endl;

}




