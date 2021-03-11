// 09_03_TestTheTimeClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Time.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>

using namespace std;


Time::Time() : Time{ 0,0,0 } {}
Time::Time(int hour) : Time{ hour, 0, 0 } {}
Time::Time(int hour, int minute) : Time{ hour, minute, 0 } {}
Time::Time(int hour, int minute, int second) {
	setTime(hour, minute, second);
}

// setTime(hour, minute, second)
void Time::setTime(int hr, int min, int sec) {

	setHour(hr);
	setMinute(min);
	setSecond(sec);

} // end Time::setTime

void Time::setHour(int hr) {
	// validate
	if (hr >= 0 && hr <= 24) {

		hour = hr;
	}
	else {
		throw invalid_argument(
			"hour, minute, and/or second was out of range"
		);
	}
}

void Time::setMinute(int min) {
	if (min >= 0 && min <= 60) {
		minute = min;
	}
	else {
		throw invalid_argument("'Minute' value passed in is out of range");
	}
		
}

void Time::setSecond(int sec) {
	if (sec >= 0 && sec <= 60) {
		second = sec;
	}
	else {
		throw invalid_argument("second value is out of range");
	}
}

// getHour
unsigned int Time::getHour() const { return hour; }
unsigned int Time::getMinute() const { return minute; }
unsigned int Time::getSecond() const { return second; }



string Time::toTwelveHourClockString() const {
	ostringstream output;

	output
		<< setfill('0')
		<< ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setw(2)
		<< minute << ":"
		<< setw(2)
		<< second << ":"
		<< (hour < 12 ? " AM" : " PM");

	return output.str();
}



string Time::toTwentyFourHourClockString() const {
	ostringstream output;

	output
		<< setfill('0')
		<< setw(2)
		<< hour << ":"
		<< setw(2)
		<< minute << ":"
		<< setw(2)
		<< second;

	return output.str();
}












