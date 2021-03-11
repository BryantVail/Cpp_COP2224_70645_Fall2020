// figure 9.20
// Employee.h


#ifndef Employee_h
#define Employee_h

#include "Date.h"
#include <string>

class Employee {
public:
	Employee(
		const std::string& firstName, 
		const std::string& lastName, 
		const Date& birthDate, 
		const Date& hireDate);
	std::string toString() const; 
	~Employee(); // confirming destruction
private:
	std::string firstName;
	std::string lastName;
	const Date birthDate;
	const Date hireDate;
};

#endif



