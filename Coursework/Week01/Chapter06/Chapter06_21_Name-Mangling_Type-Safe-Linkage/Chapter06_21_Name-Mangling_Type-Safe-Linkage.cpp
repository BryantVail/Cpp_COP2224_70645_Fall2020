// Chapter06_21_Name-Mangling_Type-Safe-Linkage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

double square(double y) {
    return y * y;
}

void nothing1(int a, float b, char c, int& d) {}

int nothing2(char a, int b, float& c, double& d) {
    return 0;
}

int main()
{
    
}
















