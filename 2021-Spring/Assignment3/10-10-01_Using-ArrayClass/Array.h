// Array.h
// figure: 10.10


#ifndef Array_h
#define Array_h

#include <iostream>

class Array {
	friend std::ostream& operator<<(std::ostream&, const Array&);
	friend std::istream& operator>>(std::istream&, Array&);

public:
	// line#13 in book
	explicit Array(int = 10); // default constructor
	Array(const Array&); // copy constructor
	// line#15 in book
	~Array(); // destructor
	size_t getSize() const; // return size

	const Array& operator=(const Array&); // assignment operator
	bool operator==(const Array&) const; // equality operator

	// inequality operator
	bool operator!=(const Array& right) const {
		return !(*this == right); // invokes Array::operator==
	}

	// line# 27 & 30
	// const & non-const are necessary for
	// 	different circumstances: 
	//	ex: integerObject.operator[](5);  
	// subscript operator for non-const objects
	// returns modifiable lvalue
	int& operator[](int);

	// subscript operator for const objects
	// returns rvalue
	int operator[](int) const;
private:
	size_t size;
	int* ptr;

};
















#endif