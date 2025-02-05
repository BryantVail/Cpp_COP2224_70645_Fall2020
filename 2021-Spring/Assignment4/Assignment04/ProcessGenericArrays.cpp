// ProcessGenericArrays.cpp
// 

#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include "../Assignment04-files/Array.h"
using namespace std;

template<typename T>
void Process(
	Array<T>& arrayFirst,
	Array<T>& arraySecond) {

  

  // print arrayFirst size and contents
  cout << "Size of first Array object is "
    << arrayFirst.getSize()
    << "\nArray after initialization:\n" << arrayFirst;

  // print arraySecond size and contents
  cout << "\nSize of second Array object is "
    << arraySecond.getSize()
    << "\nArray after initialization:\n" << arraySecond;

  // input and print arrayFirst and arraySecond
  cout 
    << "\nEnter " 
    << (arrayFirst.getSize() + arraySecond.getSize()) 
    << " " 
    << typeid(T).name() << " values:" << endl;
  cin >> arrayFirst >> arraySecond;

  cout 
    << "\nAfter input, the Arrays contain:\n"
    << "First Array object:\n" 
    << arrayFirst
    << "Second Array object:\n" 
    << arraySecond;

  // use overloaded assignment (=) operator
  cout 
    << "\nAssigning second Array object to the first Array object:" << endl;
  arrayFirst = arraySecond; // note target Array is smaller

  cout 
    << "First Array object:\n" << arrayFirst
    << "Second Array object:\n" << arraySecond;

  // use overloaded equality (==) operator
  cout << "\nEvaluating for equality" << endl;

  if (arrayFirst == arraySecond)
    cout << "The Array objects are equal" << endl;
  else
    cout << "The Array objects are not equal" << endl;

  // use overloaded subscript operator to create rvalue
  cout << "\nValue of first element in first Array object is " << arrayFirst[0] << endl;

  return;
}




