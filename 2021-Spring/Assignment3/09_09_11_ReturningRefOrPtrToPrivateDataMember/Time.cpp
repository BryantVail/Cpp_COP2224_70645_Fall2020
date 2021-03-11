// figure: 9.12: Time.cpp

#include <stdexcept>
#include "Time.h"
using namespace std;

void Time::setTime(int hr, int min, int sec) {

	if ( (hr >= 0 && hr < 24)
		&&
		(min >= 0 && min < 60)
		&&
		(sec >= 0 && sec < 60) ) {
		hour = hr;
		minute = min;
		second = sec;
	} 
	else {
		throw invalid_argument(
			"hour, minute, and/or second is out of range"
		);
	}

} // end Time::setTime

unsigned int Time::getHour() const { return hour; }

//**!!!!Poor Practice!!!!***
// returning a reference to a private data member
unsigned int& Time::badSetHour(int badHour) {
	if (badHour >= 0 && badHour < 24) {
		hour = badHour;
	}
	else {
		throw invalid_argument("hour must be 0-23");
	}

	return hour; // danger!
}






