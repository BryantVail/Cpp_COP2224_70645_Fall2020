


#include <iomanip>
#include <iomanip>
#include "Square.h"
using namespace std;


Square::Square(int sideA) {
	this->setSideA(sideA);// sets both values
}

void Square::setSideA(int lengthAndWidth) {
	this->setSideB(lengthAndWidth);
}

void Square::setSideB(int lengthAndWidth) {

	if (lengthAndWidth > 0) {
		this->sideA = lengthAndWidth;
		this->sideB = lengthAndWidth;

	}
	else {
		this->sideA = 1;
		this->sideB = 1;
	}
}