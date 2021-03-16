// Employee.cpp
// figure: 9.29

#include <iostream> 
#include "Employee.h"
using namespace std;

// static dataMember
unsigned int Employee::count{ 0 }; // cannot use static keyword

// defined static memberFunction returning 
// number of Employee objects instantiated 
// (declared static in Employee.h)
unsigned int Employee::getCount() { return count; }

// constructor
Employee::Employee(
	const string& first,
	const string& last) : firstName(first), lastName(last) {

	count++; // increment static member
	cout
		<< "Employee constructor for: \n\t"
		<< this->firstName << " "
		<< this->lastName
		<< "\n - has been called.\n" << endl;

}

Employee::~Employee() {
	cout
		<< "~Employee() called for: \n\t"
		<< firstName << " "
		<< lastName
		<< endl;
	count--;
}

string Employee::getFirstName() const { return this->firstName; }
string Employee::getLastName() const { return this->lastName; }

