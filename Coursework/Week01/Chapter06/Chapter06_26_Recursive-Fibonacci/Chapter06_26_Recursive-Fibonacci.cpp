// Chapter06_26_Recursive-Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long number);

int main()
{
    
    for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
        cout << "fibonacci(" << counter << ") = "
            << fibonacci(counter) << endl;
    }
    cout << "\n";

    unsigned long firstNumber{ 20 };
    unsigned long secondNumber{ 30 };
    unsigned long thirdNumber{ 35 };

    // display higher fibonacci values
    cout << "\nfibonacci(" << firstNumber << ") = " << fibonacci(firstNumber) << endl;
    cout << "\nfibonacci(" << secondNumber << ") = " << fibonacci(secondNumber) << endl;
    cout << "\nfibonacci(" << thirdNumber << ") = " << fibonacci(thirdNumber) << endl;


}

// fibonacci recursive function
unsigned long fibonacci(unsigned long number) {
    if ((number == 0) || (number == 1)) {
        return number;
    }
    else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}











