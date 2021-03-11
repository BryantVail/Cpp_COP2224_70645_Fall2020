// Chapter06_18_DefaultArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int boxVolume(
    unsigned int length = 1,
    unsigned int width = 1,
    unsigned int height = 1);

int main()
{
    unsigned int length{ 10 };
    unsigned int width{ 5 };
    unsigned int height{ 2 };

    // no arguments
    cout 
        << "Volume of the box with"
        << "\nlength:\t\t1 (default)" 
        << "\nwidth:\t\t1 (default)"
        << "\nheight:\t\t1 (default)\n"
        << "volume:\t\t" << boxVolume() << "\n\n";

    // specify: [ length]
    cout 
        << "Volume of the box with \nlength:\t\t" << length
        << "\nwidth:\t\t1 (default)"
        << "\nheight:\t\t1 (default)\n"
        << "volume:\t\t" << boxVolume(length) << "\n\n";

    // specify: [length, width]
    cout 
        << "Volume of the box with \nlength:\t\t" << length 
        << "\nwidth:\t\t" << width 
        << "\nheight:\t\t1 (default)\n" 
        << "volume:\t\t" << boxVolume(length, width) << "\n\n";

    // specify: [length, width, height]
    cout
        << "Volume of the box with \nlength:\t\t" << length
        << "\nwidth:\t\t" << width
        << "\nheight:\t\t" << height << "\n"
        << "volume:\t\t" << boxVolume(length, width, height) << "\n\n";

}

// function boxVolume: calculates the volume of a box
unsigned int boxVolume(
    unsigned int length,
    unsigned int width,
    unsigned int height) {

    return (length * width * height);
}














