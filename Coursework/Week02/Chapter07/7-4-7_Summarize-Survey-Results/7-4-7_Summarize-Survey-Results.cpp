// 7-4-7_Summarize-Survey-Results.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    // array sizes
    const size_t responseSize{ 20 };
    const size_t frequencySize{ 6 };

    // survey responses
    const array<unsigned int, responseSize> responses{
        1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5
    };

    // initialize frequency counters to 0
    array<unsigned int, frequencySize> frequency{};

    //foreach answer, select responses element and use that value as frequency
    // subscript to determine element to increment
    for (size_t answerIndex{ 0 }; answerIndex < responses.size(); ++answerIndex) {
        ++frequency[responses[answerIndex]];
    }

    cout << "Rating" << setw(12) << "Frequency" << endl;

    //output each array element's value
    for (size_t rating{ 1 }; rating < frequency.size(); ++rating) {
        cout << setw(6) << rating << setw(12) << frequency[rating] << endl;
    }
}










