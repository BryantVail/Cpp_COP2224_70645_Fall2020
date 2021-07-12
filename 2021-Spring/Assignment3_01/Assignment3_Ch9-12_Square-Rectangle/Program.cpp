// Assignment3_Ch9-12_Square-Rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include "Square.h"
using namespace std;

void displayData(Rectangle shape);

int main()
{

    while (true) {

        int sideA{ 0 };
        int sideB{ 0 };
        string sideAString = "";
        string sideBString = "";
        cout
            << "Testing the square class" << endl;
        cout << "Enter length of side:\t";
        cin
            >> sideA;

        Square square{ sideA };
        displayData(square);

        // after increment
        cout << "\nSquare: after incrementing the Square Object\n";
        ++square;
        displayData(square);

        // Testing Rectangle
        // reset variables
        sideA = 0;
        sideB = 0;

        cout
            << "Testing the Rectangle Class"
            << "\nEnter length of sideA:\t";
        cin
            >> sideA;
        cout
            << "Enter length of sideB:\t";
        cin >> sideB;

        Rectangle rectangle{ sideA, sideB };
        displayData(rectangle);

        // calling decrement operator
        --rectangle;
        cout
            << "Rectangle Object after decrement operator used\n";
        displayData(rectangle);

        if (square == rectangle) {
            cout << "square & rectangle are equal\n\n"
                << "square:\n\tsideA:\t" << square.getSideA()
                << "\n\tsideB:\t" << square.getSideB() << "\n\n"
                << "rectangle:\n\tsideA:\t"<< rectangle.getSideA() << "\n\t"
                << "sideB:\t"<< rectangle.getSideB() << "\n\n----------------\n\n";
        }
        else {
            cout << "square & rectangle are NOT equal";
        }

        cout
            << "enter 0 to stop, or 1 to do it again";
        int continueOrNot{ 0 };
        if (continueOrNot != 1) {
            break;
        }
        else {
            continue;
        }
    }// end while
}

void displayData(Rectangle shape) {
    cout
        << "\n"
        << "The Length of sideA is:\t" << shape.getSideA() << "\n"
        << "The Length of SideB is:\t" << shape.getSideB() << "\n"
        << "The Perimeter is:\t" << shape.computePerimeter() << "\n"
        << "The Area is:\t\t" << shape.computeArea() << "\n\n";

}