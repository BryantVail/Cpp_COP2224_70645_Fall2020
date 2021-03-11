// 7-4-5_barchart-to-display-array-data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    
    const size_t arraySize{ 11 };
    // number of instances of each grade: 
    // > n{0-9, 10-19, 20-29, 30-39, 40-49, 50-59, 60-69, 70-79, 80-89, 90-99, 100}
    array<unsigned int, arraySize> n{ 0,0,0,0,0,0,1,2,4,2,1 };

    cout << "Grade Distribution: " << endl;

    //foreach output a bar(asterisk)
    for (size_t i{ 0 }; i < n.size(); ++i) {
        if (i == 0) {
            cout << "  0-9: ";
        }
        else if (i == 10) {
            cout << "  100: ";
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }

        //print bar chart
        for (unsigned int stars{ 0 }; stars < n[i]; ++stars) {
            cout << "*";
        }

        cout << endl;
    }

}








