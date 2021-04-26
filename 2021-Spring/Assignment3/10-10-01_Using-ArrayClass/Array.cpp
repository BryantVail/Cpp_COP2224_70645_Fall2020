// Array.cpp
// Figure 10.11


#include "Array.h"
using namespace std;

// lines 11-14
// default constructor (default size: 10)
Array::Array(int arraySize)
	: size{ (arraySize > 0 
		// cast to size_t, efficient unsigned int
		? static_cast<size_t>(arraySize) 
		: throw invalid_argument{
			"Array size must be greater than Zero/0"})},
	ptr { new int[size] {} } {}

// copy constructor
// takes Array&
Array::Array(const Array& arrayToCopy)
	: size{ arrayToCopy.size }, ptr{ new int[size] }{
	for (size_t i{ 0 }; i < size; i++) {
		// pass each value from arrayToCopy
		ptr[i] = arrayToCopy.ptr[i]; 
	}
}

// destructor
Array::~Array() {
	// release pointer-based array space
	delete[] ptr; 

}

// size_t getSize() const 
size_t Array::getSize() const {
	return this->size;
}

// line#37-53 in book
// overloaded assignment operator: 
// const return avoids:(?) (a1 = a2) = a3
/* steps: [ 
	 changeArraySizeIfNecessary(), 
	 assignValuesToNewlySizedArrayPointerMemSlots() ]	*/
const Array& Array::operator=(const Array& arrayToTheRightOfOperator) {
	if (&arrayToTheRightOfOperator != this) {
		// avoid self-assignment
		// for Arrays of different sizes, de-allocate original
		// left-side Array, then allocate new left-side Array
		if (this->size != arrayToTheRightOfOperator.size) {
			delete[] this->ptr; // release space
			this->size = arrayToTheRightOfOperator.size; // resize this object
			this->ptr = new int[this->size]; // create space for Array copy
		}

		for (size_t i{ 0 }; i < size; ++i) {
			ptr[i] = arrayToTheRightOfOperator.ptr[i]; // copy array over
		}
	}

	return *this;
}


// determine if (array1 == array2){return true;} else{return false;}
bool Array::operator==(const Array& right) const {
	if (size != right.size) {
		return false; // different sizes
	}

	for (size_t i{ 0 }; i < size; ++i) {
		if (ptr[i] != right.ptr[i]) {
			// contents of the array not equal
			return false; 
		}
	}

	return true; // if nothing else, must be true
}


// overloaded subscript operator for non-const Arrays:
// reference return  creates modifiable lvalue
int& Array::operator[](int subscript) {
	// check for subscript.out-of-range error
	if (subscript < 0 || subscript >= size) {
		throw out_of_range{ "Subscript out of Range for the Array" };
	}
	return ptr[subscript];
}


// overloaded subscript operator for const Arrays
// const reference return creates an rvalue
int Array::operator[](int subscript) const {
	// check bounds
	if (subscript < 0 || subscript >= this->size) {
		throw out_of_range{ "Subscript for array is out of range" };
	}

	return ptr[subscript];
}


// lines 95-101 in book
// overloaded input operator
// inputs values for entire Array
istream& operator>>(istream& cinInput, Array& arry) {
	for (size_t i{ 0 }; i < arry.size; ++i) {
		cinInput >> arry.ptr[i];
	}

	return cinInput;
}

// lines 104-112 in book
// overloaded output operator
ostream& operator<<(ostream& output, const Array& arry) {
	//output private ptr-based Array
	for (size_t i{ 0 }; i < arry.size; ++i) {
		output
			<< arry.ptr[i] << "\t";
	}

	output << endl;
	return output; // enables cout << x << y;
}


