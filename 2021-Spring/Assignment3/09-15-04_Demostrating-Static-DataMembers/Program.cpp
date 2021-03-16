// 09-15-04_Demostrating-Static-DataMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "Employee.h"
#include <iostream>
using namespace std;


int main()
{
    // no objects exist at the moment
    cout
        << "Number of Employee objects instantiated:\n\t"
        << Employee::getCount() << endl;


    { // nested scope
        // creates Employee objects
        Employee e1{ "Stephanie", "Vail" };
        Employee e2{ "Ricky", "Baker" };

        // print how many existing objects there are
        cout
            << "Number of Employee objects instantiated:\n\t"
            << Employee::getCount() << "\n\n";

        // print employees
        cout
            << "Employee 1:\n\t"
            << e1.getFirstName() << " "
            << e1.getLastName() << "\n"
            << "Employee 2:\n\t"
            << e2.getFirstName() << " "
            << e2.getLastName() << "\n\n";
    } // end nested scope

    cout
        << "\nNumber of Employee Objects left after Destruction:\n\t"
        << Employee::getCount() << endl;

}









