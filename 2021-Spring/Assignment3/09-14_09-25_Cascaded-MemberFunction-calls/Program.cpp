// 09-14_09-25_Cascaded-MemberFunction-calls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time time;

    time
        .setHour(18)
        .setMinute(30)
        .setSecond(22);

    cout
        << "24hr Time:\n\t" << time.toTwentyFourHourTimeString() << "\n"
        << "12hr Time:\n\t" << time.toTwelveHourClockString() << "\n";

    cout
        << "\nNewStandardTime:\n\t"
        << time.setTime(20, 20, 20).toTwelveHourClockString() << endl;
}


