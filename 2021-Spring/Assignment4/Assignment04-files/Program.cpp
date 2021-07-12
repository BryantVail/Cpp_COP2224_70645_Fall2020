//Name: 
//Date: 
// Assignment #6 - client application to test the Array class
#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include "Array.h"
#include "../Assignment04/ProcessGenericArrays.cpp"


using namespace std;

int main()
{
   
  Array<int> intArray1(2); // 2-element Array
  Array<int> intArray2(3); // 3-element Array by default

  Process(
    intArray1,
    intArray2);

  Array<double> doubleArray1(2); // 2-element Array
  Array<double> doubleArray2(3); // 3-element Array by default

  Process(
    doubleArray1,
    doubleArray2);

  Array<char> charArray1(2); // 2-element Array
  Array<char> charArray2(3); // 3-element Array by default

  Process(
    charArray1,
    charArray2);

   
} // end main