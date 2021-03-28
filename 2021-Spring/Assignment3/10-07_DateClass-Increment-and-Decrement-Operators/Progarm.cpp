// 10-07_DateClass-Increment-and-Decrement-Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1{ 27, 11, 2010 };
    Date date2; // defaults to 01/01/1900

    try {

        cout
            << "date1 is\t" << date1 << "\n"
            << "date2 is\t" << date2 << "\n\n";
        cout
            << "date1 += 7 is:\t"
            << (date1 += 7);

        date2.setDate(28, 2, 2008);
        cout
            << "\n\n date2 is:\t" << date2 << "\n";
        cout
            << "++date2 is:\t" << ++date2 << "(leap year allows the 29th)\n\n";

        Date date3{ 13, 7, 2010 };

        cout
            << "\n\nTest:\tprefix increment operator:\n\t"
            << "date3 is:\t" << date3 << "\n\t";
        cout
            << "++d3 is:\t"
            << ++date3 << "\n\t";
        cout << "date3 is:\t" << date3 << "\n\n"; 

        cout
            << "Test:\tpostfix increment operator:\n\t"
            << "date3 is:\t"
            << date3 << "\n\t";

        cout
            << "date3++ is:\t"
            << date3++ << "\n\t";

        cout << "date3 is:\t" << date3 << endl;
    }
    catch (exception e) {
        cout
            << e.what() << "\n\n";
    }



}








