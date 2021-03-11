// Time.cpp
// Chapter 9.13


#include <stdexcept>
#include "Time.h"
using namespace std;

void Time::setTime(int hour, int minute, int second) {

	if ((hour >= 0 && hour < 24)
		&&
		(minute >= 0 && minute < 60)
		&&
		(second >= 0 && second < 60)) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else {
		throw invalid_argument(
			"hour, minute, and/or second is out of range"
		);
	}

} // end Time::setTime

unsigned int Time::getHour() const { return hour; }






















