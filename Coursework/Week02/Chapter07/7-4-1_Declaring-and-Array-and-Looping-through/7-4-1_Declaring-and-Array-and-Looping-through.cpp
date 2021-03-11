// 7-4-1_Declaring-and-Array-and-Looping-through.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{

    array<int, 5> n; // array with space for 5 values

    // init the elements in the array
    for (size_t i{ 0 }; i < n.size(); ++i) {
        n[i] = 0; // set array[i] = 0
    }

    cout << "Element" << setw(10) << "Value" << endl;

    //output
    for (size_t j{ 0 }; j < n.size(); ++j) {
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }

    
}












