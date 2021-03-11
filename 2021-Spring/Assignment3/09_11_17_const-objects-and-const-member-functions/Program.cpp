// 09_11_17_const-objects-and-const-member-functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"


int main()
{
    Time wakeUp{ 6, 45, 0 };
    const Time noonConst{ 12,0,0 };
                            // OBJECT       // MEMBER FUNCTION
    wakeUp.setHour(18);     // non-const    // non-cost
    noonConst.setHour(12);  // const        // non-const
    wakeUp.getHour();       // non-const    // const
    noonConst.getMinute();  // const        // const
    noonConst.toTwentyFourHourClockString();
                            // const        // const
    noonConst.toTwelveHourClockString();
                            // const        // non-const
}





