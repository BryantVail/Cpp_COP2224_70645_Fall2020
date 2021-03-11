// figure 9.21
// Employee.cpp

#include <iomanip>
#include <iostream>
#include <sstream>
#include "Employee.h"
#include "Date.h"
using namespace std;

Employee::Employee(
	const string& first, 
	const string& last, 
	const Date &dateOfBirth, 
	const Date &dateOfHire) 
	: firstName{ first },
	lastName{ last }, 
	birthDate{ dateOfBirth },
	hireDate{ dateOfHire } {

	// output
	cout
		<< "Employee object constructor: \n"
		<< lastName << ", "
		<< firstName
		<< endl;
}

// print employee object 
string Employee::toString() const {

	ostringstream output;

	output
		<< setfill('0')
		<< lastName << ", "
		<< firstName
		<< "\n\tHired: "
		<< hireDate.toString()
		<< "\n\tBirthday: "
		<< birthDate.toString();

	return output.str();
		
}

// output Employee object to show its destructor
Employee::~Employee() {
	cout
		<< "Employee object destructor: "
		<< lastName << ", "
		<< firstName
		<< endl;
}







