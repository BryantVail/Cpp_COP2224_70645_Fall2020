


#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template<typename T>
void testStack(
	Stack<T>& theStack,
	const T& initialValue,
	const T& increment,
	size_t stackSize,
	const string& stackName) {

	string lineBreak = "\n\n---------- ----------\n\n";
	string pushingElementsOnto = "Pushing Elements Onto";

	cout
		<< "\n"
		<< pushingElementsOnto
		<< ": " 
		<< stackName 
		<< "\n\n";

	T pushValue{ initialValue };

	// push elements onto stack
	for (size_t i{ 0 }; i < stackSize; i++) {
		theStack.push(pushValue);

		cout
			<< "\t"
			<< pushValue;

		pushValue += increment;

		if (i == stackSize - 1) {
			cout
				<< "\n\n";
		}
		else {
			cout
				<< ",\n";
		}
	}// end for loop pushing elements

	string poppingElementsFrom = "Popping Elements From";

	cout
		<< poppingElementsFrom << ": "
		<< stackName
		<< "\n\n";

	size_t iterator{ 0 };
	while (theStack.isEmpty() == false) {

		cout
			<< "\t"
			<< theStack.top();

		theStack.pop();

		++iterator;
		if (iterator == stackSize) {
			cout
				<< "\n";
		}
		else {
			cout
				<< ",\n";
		}

	}// end while(theStack.isEmpty() == false)

	cout
		<< "\n"
		<< "The Stack is empty, the fun has stopped, no longer can we pop."
		<< lineBreak;

}


