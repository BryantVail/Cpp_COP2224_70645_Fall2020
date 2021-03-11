// 7-4-2_Initialize-array-in-a-declaration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;



int main()
{
    array<int, 10> m{}; // inits all elements to 0
    array<int, 5> n{ 32, 27, 64, 18, 95 };

    cout << "Element" << setw(10) << "Value" << endl;

    //output array
    for (size_t i{ 0 }; i < n.size(); ++i) {
        cout << setw(7) << i << setw(10) << n[i] << endl;
    }

}




