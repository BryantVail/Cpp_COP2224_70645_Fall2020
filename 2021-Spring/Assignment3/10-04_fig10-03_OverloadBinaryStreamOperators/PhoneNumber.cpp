// PhoneNumber.cpp
// figure: 10.4

#include "PhoneNumber.h"
#include <iomanip>
#include <string>
using namespace std;

// overloaded stream insertion operator: 
// cannot be a member function if we would like to invoke it with: 
// "cout << phoneNumberObject;"
ostream& operator<<(ostream& output, const PhoneNumber& number) {
	output
		<< "Area Code:\t" << number.areaCode << "\n"
		<< "Exchange:\t" << number.exchange << "\n"
		<< "Line:\t\t" << number.line << "\n"
		<< "(" << number.areaCode << ") "
		<< number.exchange << "-"
		<< number.line << "\n";

	return output;
}


// overloaded stream extraction operator: 
// cannot be a member function if we would like to invoke it with:
// "cin >> phoneNumberObject;"
istream& operator>>(istream& input, PhoneNumber& number) {
	input.ignore(); // skip (
	input >> setw(3) >> number.areaCode;
	input.ignore(2); // skip: ) and space
	input >> setw(3) >> number.exchange;
	input.ignore(); // skip dash: "-"
	input >> setw(4) >> number.line;
	return input;
}




