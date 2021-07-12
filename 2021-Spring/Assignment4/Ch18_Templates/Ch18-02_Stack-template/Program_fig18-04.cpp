// fig 18.04, 
// Program_fig18-04.cpp

#include <iostream>
#include <string>
#include "Stack.h"
#include "TestStack.cpp"

using namespace std;

int main() {
	Stack<double> doubleStack;
	const size_t doubleStackSize{ 5 };

	testStack(
		doubleStack, 
		1.1, 
		1.1, 
		doubleStackSize, 
		"doubleStack");

	Stack<int> intStack;
	const size_t intStackSize{ 10 };
	testStack(
		intStack,
		1, 
		1, 
		intStackSize, 
		"intStack");

	string end = "";
	cin
		>> end;
}


