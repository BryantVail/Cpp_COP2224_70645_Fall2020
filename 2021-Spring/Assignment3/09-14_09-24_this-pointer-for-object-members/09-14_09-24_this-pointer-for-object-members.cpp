// 09-14_09-24_this-pointer-for-object-members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Test {
public:
    explicit Test(int);
    void print() const;
private:
    int x{ 0 };
};

// constructor
Test::Test(int value) : x{ value } {}

// print x using implicit then explicit 'this pointers'
// the parentheses around '*this' are required
void Test::print() const {
    //implicitly use the 'this' member for x
    cout
        << "x\t\t=\t" << x << "\n";

    // explicit: use the 'this' pointer and the arrow
    //     operator to access the member 'x'
    cout
        << "this->x \t=\t" << this->x << "\n";

    // explicitly use the dereferenced 'this' pointer and 
    //     the dot operator to access the member 'x'
    cout
        << "(*this).x\t=\t" << (*this).x << endl;
}

int main()
{
    Test testObject{ 12 };
    testObject.print();
}











