// figure 9.19, Date.cpp, 

#include <array>
#include <iomanip>
#include <iostream>
#include <sstream> 
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(
	unsigned int dayOfMonth,
	unsigned int monthOfYear,
	unsigned int yr)
	:	day{ dayOfMonth },
	month{ monthOfYear },
	year{ yr } {

	if (monthOfYear < 1 || monthOfYear > monthsPerYear) {
		throw invalid_argument("Month must be in the range between 1 & 12");
	}

	cout
		<< "Date object constructor for date: "
		<< toString()
		<< endl;
} // end constructor

// print date object in month/day/year
string Date::toString() const {
	ostringstream output;
	output
		<< setfill('0')
		<< setw(2)
		<< month << '/'
		<< setw(2)
		<< day << '/'
		<< year;

	return output.str();
		
}

// destructor
Date::~Date() {
	cout << "Date Object destructor for date: "
		<< toString() << endl;
}

// utility function
// check day
unsigned int Date::checkDay(int testDay) const {
	static const array<int, monthsPerYear + 1> daysPerMonth{
		0,31,28,31,30,31,30,31,31,30,31,30,31 };
	
	if (testDay > 0 && testDay <= daysPerMonth[month]) {
		return testDay;
	}

	// feb 29th
	if (
		month == 2 && testDay == 29
		&&
		(
			year % 400 == 0
			||
			(year % 4 == 0 && year % 100 != 0))) {
		return testDay;
	}

	throw invalid_argument("invalid day for current month and year");

}











