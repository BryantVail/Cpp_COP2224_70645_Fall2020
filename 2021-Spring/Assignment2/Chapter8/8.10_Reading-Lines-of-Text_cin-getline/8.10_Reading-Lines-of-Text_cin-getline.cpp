// 8.10_Reading-Lines-of-Text_cin-getline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char sentence[80];
    cin.getline(sentence, 80, '\n');

    cout << sentence;
}










