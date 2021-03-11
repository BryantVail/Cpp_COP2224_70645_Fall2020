// 09_12_18_Composition_Objects-as-Members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int main()
{
    
    Date birth{ 24, 7, 1949 };
    Date hire{ 12, 3, 1988 };
    Employee manager{ "Bob", "Blue", birth, hire };

    cout
        << "\n"
        << manager.toString()
        << endl;

}





