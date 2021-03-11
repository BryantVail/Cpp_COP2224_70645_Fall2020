// Chapter06_07_03_Randomizing-the-RandomNumberGen-w-srand.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

    unsigned int seed{ 0 }; // stores seed by user

    cout << "Enter Seed: ";
    cin >> seed;

    srand(seed); // seed the random number generator

    // loop 10 times
    for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
        // pick random number from 1-6 & output it
        cout << setw(10) << (1 + rand() % 6);

        // if counter is divisible by 5, start a new line of output
        if (counter % 5 == 0) {
            cout << endl;
        }
    }
    
}
















