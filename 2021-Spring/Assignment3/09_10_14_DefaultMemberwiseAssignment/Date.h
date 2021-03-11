// date.h

#include <string>

#ifndef Date_h
#define Date_h

class Date {
public:
	explicit Date(
		unsigned int day = 1, 
		unsigned int month = 1, 
		unsigned int year = 2000);
	std::string toString() const;
private:
	unsigned int day; 
	unsigned int month;
	unsigned int year;
};

#endif