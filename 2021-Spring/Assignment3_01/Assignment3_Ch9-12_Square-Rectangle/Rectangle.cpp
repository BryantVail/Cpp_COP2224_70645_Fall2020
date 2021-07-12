

#include <iomanip>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int sideA, int sideB) {
	this->setSideA(sideA);
	this->setSideB(sideB);
}

void Rectangle::setSideA(int sideA) {
	if (sideA <= 0) {
		this->sideA = 1;
	}else {
		this->sideA = sideA;
	}
}

void Rectangle::setSideB(int sideB) {
	if (sideB <= 0) {
		this->sideB = 1;
	}
	else {
		this->sideB = sideA;
	}
}

int Rectangle::getSideA() {
	return this->sideA;
}

int Rectangle::getSideB() {
	return this->sideB;
}

int Rectangle::computeArea() {
	return this->sideA * this->sideB;
}

int Rectangle::computePerimeter() {
	return (this->sideA * 2) + (this->sideB * 2);
}

void Rectangle::operator++() {
	this->setSideA(this->getSideA() + 1);
	this->setSideB(this->getSideB()+ 1);
}

void Rectangle::operator--() {
	this->setSideA(this->getSideA() - 1);
	this->setSideB(this->getSideB() - 1);
}

bool Rectangle::operator==(Rectangle& rectangle) {
	if (
		this->getSideA() == rectangle.getSideA()
		&&
		this->getSideB() == rectangle.getSideB()

		||

		this->getSideA() == rectangle.getSideB()
		&&
		this->getSideB() == rectangle.getSideA()
		) {
		return true;
	}
	else {
		return false;
	}
}