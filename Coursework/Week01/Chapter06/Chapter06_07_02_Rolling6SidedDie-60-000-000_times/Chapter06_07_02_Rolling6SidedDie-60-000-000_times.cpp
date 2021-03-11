// Chapter06_07_02_Rolling6SidedDie-60-000-000_times.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;



int main()
{
    
    // keep track of how many times each number is rolled
    unsigned int frequency1{ 0 };
    unsigned int frequency2{ 0 };
    unsigned int frequency3{ 0 };
    unsigned int frequency4{ 0 };
    unsigned int frequency5{ 0 };
    unsigned int frequency6{ 0 };

    // store the roll of the die at the time of the roll
    int face;

    for (unsigned int roll{ 1 }; roll <= 600'000'000; ++roll) {
        face = 1 + rand() % 6; //

        // determine roll value 1-6 and increment appropriate counter
        switch (face) {
            case 1: {
                ++frequency1;
                break;
            }
            case 2: {
                ++frequency2;
                break;
            }
            case 3: {
                ++frequency3;
                break;
            }
            case 4: {
                ++frequency4;
                break;
            }
            case 5: {
                ++frequency5;
                break;
            }
            case 6: {
                ++frequency6;
                break;
            }
            default: { //invalid value
                cout << "Program should never get here!";
            }
        }

    }

    cout << "Face" << setw(14) << "Frequency" << endl; // output header
    cout
        << "   1" << setw(14) << frequency1
        << "\n   2" << setw(14) << frequency2
        << "\n   3" << setw(14) << frequency3
        << "\n   4" << setw(14) << frequency4
        << "\n   5" << setw(14) << frequency5
        << "\n   6" << setw(14) << frequency6 << endl;

}















