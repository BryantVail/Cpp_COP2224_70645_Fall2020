// Time.h

#include <string>
#include <iostream>

#ifndef Time_h
#define Time_h

class Time {
public:
	explicit Time(int hour = 0, int minute = 0, int second = 0);

	// setFunctions
	Time& setTime(int hour, int minute, int second);
	Time& setHour(int hour);
	Time& setMinute(int minute);
	Time& setSecond(int second);

	unsigned int getHour() const;
	unsigned int getMinute() const;
	unsigned int getSecond() const;
	std::string toTwentyFourHourTimeString() const;
	std::string toTwelveHourClockString() const;

private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif

