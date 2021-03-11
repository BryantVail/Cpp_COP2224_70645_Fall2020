

#include <string>

#ifndef Time_h
#define Time_h

class Time {
public:
	void setTime(int hour, int minute, int second);
	unsigned int getHour() const;
private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif 