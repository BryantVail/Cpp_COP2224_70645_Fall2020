// Time.h

#include <string>

#ifndef TIME_H
#define TIME_H

using namespace std;

class Time {
public:

	// default constructor
	//explicit Time(int hr = 0, int min = 0, int sec = 0);

	Time();
	explicit Time(int);
	Time(int hr, int min);
	Time(int hr, int min, int sec);

	// setFunctions
	void setTime(int hr, int min, int sec);
	void setHour(int hr);
	void setMinute(int min);
	void setSecond(int sec);

	// getFunctions
	unsigned int getHour() const;
	unsigned int getMinute() const;
	unsigned int getSecond() const;

	string toTwentyFourHourClockString() const;
	string toTwelveHourClockString() ;
private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};


#endif














