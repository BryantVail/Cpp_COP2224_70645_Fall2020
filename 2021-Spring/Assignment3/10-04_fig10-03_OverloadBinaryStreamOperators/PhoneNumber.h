


// PhoneNumber.h
// figure: 10.3


#ifndef PhoneNumber_h
#define PhoneNumber_h

#include <iostream>
#include <string>

class PhoneNumber {
	friend std::ostream& operator<<(
		std::ostream&, 
		const PhoneNumber& ); 
	friend std::istream& operator>>(
		std::istream&, 
		PhoneNumber& );
private:
	std::string areaCode;	// 3-digit
	std::string exchange;	// 3-digit
	std::string line;		// 4-digit
};




#endif