// Chapter06_07_03_SeedRandomWithTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{


	srand(static_cast<unsigned int>(time(0)));

	// loop 10 times
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		//pick a random number from 1-6
		cout << setw(10) << (1 + rand() % 6);

		// if counter is divisible by 5, start new line of output
		if (counter % 5 == 0) {
			cout << endl;
		}
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu















