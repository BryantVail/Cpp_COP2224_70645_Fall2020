// Chapter06_07_CaseStudy_RandomNumberGen2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib> // contains function prototype for 'rand' (random numbers)
using namespace std;

int main()
{
    // loop 20 times
    for (unsigned int counter{ 1 }; counter <= 20; ++counter) {
        // pick random number from 1 to 6 and output it
        cout << setw(10) << (1 + rand() % 6);

        // if counter % 5 == 0, start new line of output
        if (counter % 5 == 0) {
            cout << endl;
        }
    }
}














