// 09-13_09-23_ModifyingPrivateData-w-Friend-Fn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Count class definition
class Count {
    friend void setX(Count&, int value);
public: 
    int getX() const { return x; };
private: 
    int x{ 0 };
};

// setX(Count&, int) can modify private data in class Count
// 
void setX(Count& countObject, int value) {
    countObject.x = value;
}

int main()
{
    Count counter;

    cout
        << "counter.x after instantiation:\n\t"
        << counter.getX()
        << endl;

    setX(counter, 8);

    cout
        << "counter.x after call to setX friend fn:\n\t"
        << counter.getX()
        << endl;
}








