// 09_08_Constructor-and-Destructor-Calls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

void create();

CreateAndDestroy firstCreateAndDestroyInstance{ 1, "(Global before main)" };

int main()
{
    cout
        << "\n***Main Function: Execution Begins***\n\n"
        << endl;

    CreateAndDestroy secondCreateAndDestroyInstance{ 2, "(local in main)" };
    static CreateAndDestroy thirdCreateAndDestroyInstance{ 3, "(local static in main)" };

    create();

    cout
        << "\n***Main Function: Execution Resumes"
        << endl;
    
    CreateAndDestroy fourthCreateAndDestroyInstance{ 4, "(local in main)" };
    cout 
        << "\n***Main Function: Execution Ends***"
        << endl;
}

void create() {
    cout
        << "\n***Create Function: Execution Begins***"
        << endl;
    CreateAndDestroy fifthCreateAndDestroyInstance{ 5, "(local in create)" };
    static CreateAndDestroy sixthCreateAndDestroyInstance{ 6, "(local static in create)" };
    CreateAndDestroy seventhCreateAndDestroyInstance{ 7, "(local in create)" };

    cout
        << "\n***Create Function: Execution Ends***"
        << endl;
}

//Object 1        Constructor Runs(Global before main)
//
//* **Main Function : Execution Begins * **
//
//
//Object 2        Constructor Runs(local in main)
//Object 3        Constructor Runs(local static in main)
//
//* **Create Function : Execution Begins * **
//Object 5        Constructor Runs(local in create)
//Object 6        Constructor Runs(local static in create)
//Object 7        Constructor Runs(local in create)
//
//* **Create Function : Execution Ends * **
//Object 7        Destructor Runs(local in create)
//Object 5        Destructor Runs(local in create)
//
//* **Main Function : Execution Resumes
//Object 4        Constructor Runs(local in main)
//
//* **Main Function : Execution Ends * **
//Object 4        Destructor Runs(local in main)
//Object 2        Destructor Runs(local in main)
//
//Object 6        Destructor Runs(local static in create)
//Object 3        Destructor Runs(local static in main)
//
//Object 1        Destructor Runs(Global before main)




