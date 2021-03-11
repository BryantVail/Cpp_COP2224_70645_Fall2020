// Chaper06_04_FunctionPrototypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int maximum(int x, int y, int z); // function prototype

int main()
{

    cout << "Enter three integer values: ";
    int int1, int2, int3;

    cin >> int1 >> int2 >> int3;

    //invoke maximum
    cout << "the maximum integer value is: "
        << maximum(int1, int2, int3) << endl;

    
}


// maximum(x,y,z): returns the largest of three integers
int maximum(int x, int y, int z) {
    int maximumValue{ x };// assume x is the largest to start
    
    // determine whether y is greater than maximumValue
    if (y > maximumValue) {
        maximumValue = y;
    }

    // determine if 'z' is greater than current maximumValue
    if (z > maximumValue) {
        maximumValue = z;
    }

    return maximumValue;
}



