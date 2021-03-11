// Date.cpp

#include <iomanip>
#include <sstream>
#include <string>
#include "Date.h"
using namespace std;

// Date Constructor (should do range checking) 
Date::Date(unsigned int dayNumber, unsigned int monthNumber, unsigned int yr)
	: day{ dayNumber }, month{ monthNumber }, year{ yr } {}

string Date::toString() const {
	ostringstream output;
	output
		<< setfill('0')
		<< setw(2)
		<< month
		<< '/'
		<< setw(2)
		<< day
		<< '/'
		<< year; 

	return output.str();
}























