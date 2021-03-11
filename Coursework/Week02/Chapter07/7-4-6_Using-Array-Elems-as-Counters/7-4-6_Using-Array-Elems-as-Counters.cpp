// 7-4-6_Using-Array-Elems-as-Counters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array> 
#include <random> 
#include <ctime> 

using namespace std;


int main()
{

    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    const size_t arraySize{ 7 };
    array<unsigned int, arraySize> frequency{};

    // roll die 60,000,000 times
    for (unsigned int roll{ 1 }; roll <= 60'000'000; ++roll) {
        ++frequency[randomInt(engine)]; // get value from index 1-6 & increment the value
    }

    cout << "Face" << setw(13) << "Frequency" << endl;

    //output
    for (size_t face{ 1 }; face < frequency.size(); ++face) {
        // print value from each 'face' index after increment in previous loop
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }
    
}







