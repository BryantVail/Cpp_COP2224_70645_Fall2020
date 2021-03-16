// Employee.h
// figure: 9.28

#ifndef Employee_h
#define Employee_h

#include <string>

class Employee {
public:
	Employee(const std::string&, const std::string&);
	~Employee(); // destructor
	std::string getFirstName() const;
	std::string getLastName() const;

	// static
	static unsigned int getCount();
private: 
	std::string firstName;
	std::string lastName;

	// static data
	static unsigned int count; // number of objects instantiated

};



#endif