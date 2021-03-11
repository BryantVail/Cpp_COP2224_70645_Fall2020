// 7-4-8_Rolling-Die-w-Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <iomanip> 
#include <array> 
#include <random> 
#include <ctime>

using namespace std;

int main()
{
    // default seed
    default_random_engine engine(static_cast<unsigned int>(time(0)));

    uniform_int_distribution<unsigned int> randomInt(0, 5);

    const size_t arraySize{ 6 };
    array<unsigned int, arraySize> frequency{};

    // roll die 60,000,000 times; die value = frequency index
    for (
        unsigned int roll{ 1 }; roll <= 60'000'000; ++roll) {
        ++frequency[randomInt(engine)];
    }

    cout << "Face" << setw(13) << "Frequency" << endl;

    for (size_t face{ 0 }; face < frequency.size(); ++face) {
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }


}











