// 10-04_fig10-03_OverloadBinaryStreamOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "PhoneNumber.h"
#include <iomanip>
using namespace std;



int main()
{
    PhoneNumber phoneNumber;

    cout
        << "Enter phone Number in the format:\n\t"
        << "(555) 555-5555:" << endl;

    // cin >> phone invokes 'operator>>' by implicitly issuing
    // the non-member function call operator>>(cin, phone)
    cin >> phoneNumber;

    cout
        << "\n\nThe PhoneNumber Entered"
        << "was:\n\n";

    // cout << phoneNumber invokes operator<<
    // implicitly issuing the non-member
    // function call operator<<(cout, phoneNumber)



}








