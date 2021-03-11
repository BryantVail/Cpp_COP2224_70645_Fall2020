// 09-02-12_UsingClass-Time.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include "../09-02_Defining-Time-cpp/Time.h"
using namespace std;

void displayTime(const string message, const Time time);

int main()
{
    
    Time t;

    displayTime("Initial time:", t); // display t's initial value
    t.setTime(13, 27, 6); // changeTime
    displayTime("After setTime:", t); // display new value

    // attempt to set the time with invalid values
    try {
        t.setTime(99, 99, 99);
    }
    catch (invalid_argument e) {
        cout
            << "Exception: "
            << e.what()
            << "\n\n";
    }

    // display 't' after attempting to assign invalid values
    displayTime("After attempting to set an invalid time: ", t);

}



void displayTime(const string message, const Time time) {
    cout
        << message
        << "\nUniversal Time: "
        << time.toUniversalString()
        << "\nStandard Time: "
        << time.toStandardString()
        << "\n\n";
}











