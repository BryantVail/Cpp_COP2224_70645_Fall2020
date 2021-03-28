// Date.cpp
// figure 10.7 

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"
using namespace std;

// initialize static: 
const array<unsigned int, 12> Date::days{
	31, 28, 31, 
	30, 31, 30, 
	31, 31, 30, 
	31, 30, 31 };

// constructor
Date::Date(int day, int month, int year) {
	setDate(day, month, year);
}

// set day, month, year
void Date::setDate(int day, int month, int year) {
	if (month >= 1 && month <= 12) {
		this->month = month;
	}
	else {
		throw new invalid_argument("Month must fit range from 1-12");
	}

	if (year >= 1900 && year <= 2100) {
		this->year = year;
	}

	if (
		(
			month == 2 
			&& 
			leapYear(this->year)
			&&
			day >= 1
			&&
			day <= 29
		)
		||
		(
			day >= 1 
			&& day <= days[month -1]
		)) {
		// then:
		this->day = day;
	}
	else {
		throw new invalid_argument("Day is out of range for current month and year");
	}// end if
}// end Date::setDate(int day, int month, int year){};

// overloaded prefix increment operator
// increment before
// ex: ++object
Date& Date::operator++() {
	helpIncrement(); // increment the date
	return *this; // reference
}

// overloaded postfix increment operator: 
// dummy integer parameter does not have a parameter name
// increment after
// ex: object++
Date Date::operator++(int) {
	Date temp{ *this }; // hold current state of object
	helpIncrement();

	// return unincremented, saved, temporary- object
	return temp;
}

// add specified number of days to Date object
Date& Date::operator+=(unsigned int additionalDays) {
	for (unsigned int i = 0; i < additionalDays; ++i) {
		// increment for each 'additionalDay'
		helpIncrement();
	}

	return *this;
}

// if(isLeapYear){return true;}else{return false;}
bool Date::leapYear(int testYear) {
	return (
		testYear % 400 == 0
		||	
		(
			testYear % 100 != 0 
			&&
			testYear % 4 == 0)
		);
}

bool Date::endOfMonth(int testDay) const {
	if (this->month == 2 && leapYear(this->year)) {
		return testDay == 29;
	}
	else {
		// see if 'testDay' is 28,30, or 31 from local static
		return testDay == days[this->month -1];
	}
}


// increment() helper function
void Date::helpIncrement() {
	// day is not endOfMonth
	if (!endOfMonth(this->day)) {
		++this->day;

	}
	else {
		if (this->month < 12) {
			++this->month;
			this->day = 1;
		}
		else {
			++this->year;
			this->day = 1;
			this->month = 1;
		}
	}
} // end helpIncrement();

ostream& operator<<(ostream& output, const Date& date) {
	static string monthName[12]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	output
		<< monthName[date.month - 1] << " "
		<< date.day << ", "
		<< date.year;

	return output; // enables cascading
}

























