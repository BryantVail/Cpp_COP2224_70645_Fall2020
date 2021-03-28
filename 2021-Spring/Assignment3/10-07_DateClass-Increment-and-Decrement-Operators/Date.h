// Date.h
// figure: 10.6

#ifndef Date_h
#define Date_h


#include <array>
#include <iostream>

class Date {
	friend std::ostream& operator<<(std::ostream&, const Date&);
public:
	Date(
		int day = 1, 
		int month = 1,
		int yr = 1900);// default constructor
	void setDate(int day, int month, int year);
	Date& operator++();		// prefix  increment
	Date operator++(int);	// postfix increment
	Date& operator+=(unsigned int); // add days, modify object
	static bool leapYear(int year); // is this a leap year?
	bool endOfMonth(int day) const; // is day that last one of the month?
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	static const std::array<unsigned int, 12> days; // days per month
	void helpIncrement(); // utility function for incrementing date
};


#endif





















