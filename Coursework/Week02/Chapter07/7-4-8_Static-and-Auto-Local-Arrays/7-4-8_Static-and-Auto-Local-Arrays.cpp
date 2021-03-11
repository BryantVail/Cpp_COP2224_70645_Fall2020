// 7-4-8_Static-and-Auto-Local-Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize{ 3 };

int main()
{
    
    cout << "First call to each function: \n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function: \n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;

}

void staticArrayInit(void) {
    // init elements to 0 first time
    static array<int, arraySize> array1;

    cout << "\nValues on entering staticArrayInit: \n";

    // output
    for (size_t i{ 0 }; i < array1.size(); ++i) {
        cout << "array1[" << i << "] = " << array1[i] << "  ";
    }

    cout << "\nValues on exiting staticArrayInit:\n";

    // modify and output contents
    for (size_t j{ 0 }; j < array1.size(); ++j) {
        cout << "array1[" << j << "] = " << (array1[j] += 5) << "  ";
    }
}


// auto local array demonstration
void automaticArrayInit(void) {
    //init elements each time function is called
    array<int, arraySize> array2{ 1,2,3 };

    cout << "\n\nValues on entering automaticArrayInit:\n";

    //output contents
    for (size_t i{ 0 }; i < array2.size(); ++i) {
        cout << "array2[" << i << "] = " << array2[i] << "  ";
    }

    cout << "\nValues on exiting automaticArrayInit: \n";

    //modify & output
    for (size_t i{ 0 }; i < array2.size(); ++i) {
        cout << "array2[" << i << "] = " << (array2[i] += 5) << "  ";
    }
}









