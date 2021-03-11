// Assignment1_Chapter6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <stdio.h>

using namespace std;

// A program which determines the cost of a speeding ticket.
//  1. Calculate the total cost of the ticket based on:
//      a. the speed of the violator
//      b. the speed limit.
//  2. Print the total cost of the ticket on the monitor.
//  3. The program must allow the user to enter multiple speeding violations.
// Requirements:
 // 1. Generate a random number from 25 up to and including 65 for the speed limit
 // 2. User Input
 //     a. Driver's Speed
 //       1. Prompt for speed of the driver
//  3. Base Ticket Rate
//      a. $60.25
//  4. Ticket Rates
//      0 % additional if the driver's speed was 5 or less miles per hour above the speed limit.
//      5 % additional if driver's speed was more than 5 miles per hour above the speed limit.
//      10 % additional if driver's speed was more than 10 miles per hour above the speed limit
//      20 % additional if driver's speed was 20 or more miles per hour above the speed limit.
//      Do not charge a fine if the driver wasn't speeding.  
//          a. either display this to the user or display a fine of $0.00
//  

int milesPerHourOverSpeedLimit(int vehicleSpeed, int speedLimit);
float calculateFine(int milesPerHourOverSpeedLimit, float baseFine);

int main()
{

    enum class ApplicationStatus : int {
        CONTINUE, STOP
    };

    ApplicationStatus appStatus;
    appStatus = ApplicationStatus::CONTINUE;
    
    static float baseSpeedingFine = 60.25;

    // config randomization generator
    srand(static_cast<unsigned int>(time(0)));

    int userInputSpeed{ 0 };
    float ticketFineTotal; 


    while (appStatus == ApplicationStatus::CONTINUE) {
        userInputSpeed = 0;
        int speedLimit{ 25 + rand() % 40 };

        cout << "Please enter the speed of the vehicle\n";
        cin >> userInputSpeed;

        cout
            << "Speed Limit is: "
            << speedLimit
            << ",\n"
            << "Your Speed is: "
            << userInputSpeed
            << "\nThe fine for the speed of the vehicle is: ";

        int mphOver{ milesPerHourOverSpeedLimit(userInputSpeed, speedLimit) };

        if (mphOver > 0)
            ticketFineTotal = calculateFine(mphOver, baseSpeedingFine);
        else
            ticketFineTotal = 0;

        cout 
            << "$"
            << fixed << setprecision(2) << ticketFineTotal
            << "\n\n";

        cout << "Would you like to add another vehicle speed?\n\n"
            << "\n'Y' for yes, 'N' for no";

        char addAnotherSpeed{ 'Y' };
        cin >> addAnotherSpeed;

        switch (addAnotherSpeed) {
            case 'Y':
                break;
            case 'N': 
                appStatus = ApplicationStatus::STOP;
                break;
            default: 
                break;
        }

        
    }

}

int milesPerHourOverSpeedLimit(int vehicleSpeed, int speedLimit)
{
    if (vehicleSpeed < speedLimit)
        return 0;
    else
        return vehicleSpeed - speedLimit;
}

float calculateFine(int milesPerHourOverSpeedLimit, float baseFine) {

    float returnValue{ 0 };
    float multiplier{ 0 };

    if (milesPerHourOverSpeedLimit <= 5) {
        multiplier = 0.0;
        returnValue = baseFine * (1 + multiplier);
        return returnValue;
    }
    else if (milesPerHourOverSpeedLimit > 5 && milesPerHourOverSpeedLimit <= 10) {
        multiplier = 0.05;
        returnValue = baseFine * (1 + multiplier);
        return returnValue;
    }
    else if (milesPerHourOverSpeedLimit > 10 && milesPerHourOverSpeedLimit < 20) {
        multiplier = 0.1;
        returnValue = baseFine * (1 + multiplier);
        return returnValue;
    }
    else if (milesPerHourOverSpeedLimit >= 20) {
        multiplier = 0.2;
        returnValue = baseFine * (1+ multiplier);
        return returnValue;
    }
    else {
        return 0;
    }

}
