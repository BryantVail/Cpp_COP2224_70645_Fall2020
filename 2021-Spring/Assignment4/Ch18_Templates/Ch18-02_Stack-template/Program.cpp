// Ch18-02_Stack-template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std;

int mainer()
{
  string lineBreak = "\n\n---------------------\n\n";
  Stack<double> doubleStack;
  const size_t doubleStackSize{ 5 };
  double doubleValue{ 1.1 };

  cout
    << "Pushing elements onto doubleStack:"
    << "\n\n";

  // push 5 doubles onto the stack
  for (size_t i = 0; i < doubleStackSize; i++) {
    doubleStack.push(doubleValue);
    cout << doubleValue << ", ";
    doubleValue += 1.1;
  }

  cout
    << lineBreak
    << "Popping Elements from doubleStack\n\n";

  // pop elements
  while (!doubleStack.isEmpty()) {
    cout 
      << "\t"
      << doubleStack.top()
      << ",\n";
    doubleStack.pop(); 
  }

  cout 
    << "\n\nStack is empty, cannot pop, fun has stopped"
    << lineBreak;

  Stack<int> intStack;
  const size_t intStackSize = 10;
  int intValue{ 1 };

  // push 10 integers onto intStack
  cout
    << "Pushing elements onto intStack\n\n";

  for (size_t i{ 0 }; i < intStackSize; ++i) {
    intStack.push(intValue);
    cout 
      << "\t"
      << intValue++ 
      << ",\n";
  }

  
  // pop from intStack
  cout
    << lineBreak
    << "Popping elements from intStack:\n";

  while (!intStack.isEmpty()) {
    cout
      << "\t" 
      << intStack.top() 
      << ",\n";
    intStack.pop();
  }

  cout
    << "\nStack is empty, cannot pop." << endl;

  return 1;

}






