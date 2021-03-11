

#include <string> 

#ifndef Date_h
#define Date_h

class Date {
public:
	static const unsigned int monthsPerYear{ 12 };
	explicit Date(unsigned int dayOfMonth= 1, unsigned int monthOfYear = 1, unsigned int yr = 1900);
	std::string toString() const; 
	~Date(); // confirm destructor
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;

	// utility function to check if day is appropriate for month
	unsigned int checkDay(int dayOfMonth) const;

};


#endif 








