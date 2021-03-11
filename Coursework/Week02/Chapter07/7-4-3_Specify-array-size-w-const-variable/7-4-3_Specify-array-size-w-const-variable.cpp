// 7-4-3_Specify-array-size-w-const-variable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;


int main()
{
    
    const size_t arraySize{ 5 };

    array<int, arraySize> values;

    for (size_t i{ 0 }; i < values.size(); ++i) {
        values[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(10) << "Value" << endl;

    //output
    for (size_t j{ 0 }; j < values.size(); ++j) {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }
}







