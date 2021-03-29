// Program.cpp
// figure 10.09
// 10-10-01_Using-ArrayClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array integers1{ 7 }; // seven element array
    // line 10 in book
    Array integers2; // 10-element Array by default

    // print integers1 size & contents
    cout
        << "\nSize of Array integers1 is:\t\n"
        << integers1.getSize() << "\n"
        << "Array After Init:\n\n"
        << integers1
        << "\n\n";

    // print integers2 size & contents
    cout
        << "___________________________________\n"
        << "___________________________________\n\n"
        << "Size of Array integers2 is:\n\t"
        << integers2.getSize() << "\n"
        << "Array after Init:\n\n"
        << integers2
        << "\n\n";

    // input & print integers1 & integers2
    cout
        << "Enter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout
        << "\nAfter input, the Arrays Containt:\n\t"
        << "integers1:\t" << integers1 << "\n\t"
        << "integers2:\t" << integers2 << "\n\n";

    // use overloaded inequality "!=" operator
    cout
        << "\n\nEvaluating:\n\tintegers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << "\n\n";
    }

    // create Array integers3 using integers1 as an initializer; 
    // print size and contents
    Array integers3{ integers1 }; // invokes copy constructor

    cout
        << "\nSize of Array inegers3 is:\t" << integers3.getSize()
        << "\nArray after init:\n\n"
        << integers3;

    // use overloaded assignment (=) operator
    cout
        << "\nAssigning integers 2 to integers1:\n";

    // line 37 in book
    integers1 = integers2; // note target is smaller

    cout
        << "integers1:\t" << integers1 << "\n"
        << "integers2:\t" << integers2 << "\n\n";

    // use overloaded equality (==) operator
    cout
        << "Evaluating: integers1 == integers2\n";

    if (integers1 == integers2) {
        cout
            << "integers1 & integers2 are equal\n\n";
    }

    // use overloaded subscript operator to create rvalue
    cout << "integers1[5] is:\t" << integers1[5];

    // use overloaded subscript operator to create lvalue
    cout
        << "\n\nAssigning 1000 to integers1[5]\n";
    integers1[5] = 1000;
    cout << "integers1:\t" << integers1;

    // attempt to use out-of-range subscript
    try {
        cout
            << "\nAttempt to Assign 1000 to integers[15]\n";

        integers1[15] = 1000; // error
    }
    catch (out_of_range& ex) {
        cout << "An Exception Occurred:\n\n" << ex.what() << endl;
    }




}









