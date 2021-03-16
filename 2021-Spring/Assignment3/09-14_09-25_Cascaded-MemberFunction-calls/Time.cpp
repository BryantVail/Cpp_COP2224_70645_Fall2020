// Time.cpp
// fig 9.26

#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "Time.h"
using namespace std;

// constructor
Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

// set: hour, minute, second
Time& Time::setTime(int hour, int minute, int second) {
	setHour(hour);
	setMinute(minute);
	setSecond(second);

	return *this; // returns object
}

// set hour
Time& Time::setHour(int hour) {
	if (hour >= 0 && hour < 24) {
		this->hour = hour;
	}
	else {
		throw invalid_argument("hour must be from 0 to 23");
	}

	return *this;
}

// set minute
Time& Time::setMinute(int minute) {
	if (minute >= 0 && minute < 60) {
		this->minute = minute;
	}
	else {
		throw invalid_argument("minute must be from 0 to 59");
	}

	return *this;
}

Time& Time::setSecond(int second) {
	if (second >= 0 && second < 60) {
		this->second = second;
	}
	else {
		throw invalid_argument("second must be from 0 to 59");
	}

	return *this;
}

unsigned int Time::getHour() const { return this->hour; }
unsigned int Time::getMinute() const { return this->minute; }
unsigned int Time::getSecond() const { return this->second; }

// toTwentyFourHourClockString
string Time::toTwentyFourHourTimeString() const {
	ostringstream output;

	output
		<< setfill('0') << setw(2)
		<< getHour() << ":"
		<< setw(2)
		<< getMinute() << ":"
		<< setw(2)
		<< getSecond();

	return output.str();
}

string Time::toTwelveHourClockString() const {
	ostringstream output;

	output
		<< setfill('0') << setw(2)
		<< ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
		<< setw(2)
		<< getMinute() << ":"
		<< setw(2)
		<< getSecond()
		<< (this->hour < 12 ? " AM" : " PM");

	return output.str();

}




