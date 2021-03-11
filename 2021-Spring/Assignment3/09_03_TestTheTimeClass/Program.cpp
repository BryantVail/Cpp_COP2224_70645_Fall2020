
// user defined
#include "Time.h"
// foundation
#include <iostream>
#include <stdexcept> 

using namespace std;


void displayTime(const string& message, const Time& time);

int main() {

	Time t;

	displayTime("InitialTime: ", t);
	t.setTime(13, 27, 6);
	displayTime("After 'setTime()': ", t);

	// raise exception
	try {
		t.setTime(25, 60, 60);
	}
	catch (invalid_argument& e) {
		cout 
			<< "Exception: " 
			<< e.what() 
			<< "\n\n";
	}

	displayTime("After Exception: ", t);

}

void displayTime(const string& message, const Time& time) {

	cout
		<< message
		<< "\nUniversalTime: "
		<< time.toUniversalString()
		<< "\nStandardTime: "
		<< time.toStandardString()
		<< "\n\n";

}







