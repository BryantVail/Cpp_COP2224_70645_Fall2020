// Chapter06_08_Craps_CaseStudy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// prototype
unsigned int rollDice(); // rolls dice, calculates and displays sum

int main()
{
    
    // enumeration with constants representing game status
    enum class Status : int {CONTINUE, WON, LOST};

    // randomize number generator with time
    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint{ 0 };
    Status gameStatus; // gameStatus of type 'Status'
    unsigned int sumOfDice{ rollDice() };

    // determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7: 
        case 11: 
            gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12: 
            gameStatus = Status::LOST;
            break;
        default: // did not win or lose on the first roll
            gameStatus = Status::CONTINUE;
            myPoint = sumOfDice;
            cout << "Point is: " << myPoint << endl;
            break;
    }

    // while game is not WON/LOST (complete)
    while (Status::CONTINUE == gameStatus) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = Status::WON;
        }
        else {
            if (sumOfDice == 7) {
                gameStatus = Status::LOST;
            }
        }
    }

    // display win/lost message
    if (Status::WON == gameStatus) {
        cout << "Player Wins!" << endl;
    }
    else {
        cout << "Player Loses." << endl;
    }
}

// roll the dice
unsigned int rollDice() {
    int die1{ 1 + rand() % 6 };
    int die2{ 1 + rand() % 6 };
    int sum{ die1 + die2 };

    cout 
        << "Player Rolled: " 
        << die1 
        << " + " 
        << die2 
        << " = " 
        << sum << endl;

    return sum;
}

















