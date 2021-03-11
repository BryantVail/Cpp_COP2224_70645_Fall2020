

#include <iomanip> 
#include <stdexcept> 
#include <sstream> 
#include <string> 
#include "../09-02_Defining-Time-cpp/Time.h"

using namespace std;

void Time::setTime(int hr, int min, int sec) {
	if (
		(hr >= 0 && hr < 24)
		&&
		(min >= 0 && min < 60)
		&&
		(sec >= 0 && sec < 60)) {
		hour = hr; 
		minute = min;
		second = sec;
	}
	else {
		throw std::invalid_argument("hour, minute, and/or second was out of range");
	}
}

string Time::toUniversalString() const {
	ostringstream output;

	output
		<< setfill('0')
		<< setw(2)
		<< hour
		<< ":"
		<< setw(2)
		<< minute
		<< ":"
		<< setw(2)
		<< second;

	return output.str();
}

string Time::toStandardString() const {
	ostringstream output;

	output
		<< setfill('0')
		<< setw(2)
		<< ((hour == 0 || hour == 12)
			? 12
			: hour % 12)
		<< ":"
		<< setw(2)
		<< minute
		<< ":"
		<< setw(2)
		<< second
		<< (hour < 12 ? " AM" : " PM");

	return output.str();

}

