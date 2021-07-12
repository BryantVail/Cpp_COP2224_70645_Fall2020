// 00_Cherno_Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>

// The method below is not D.R.Y
//void Print(int value) {
//    std::cout << value << std::endl;
//}
//
//void Print(std::string value) {
//    std::cout << value << std::endl;
//}

template<typename T>
void Print(T value) {
    std::cout << value << std::endl;
}

int main()
{

    Print<int>(5);
    Print<std::string>("Hello");

    

}



