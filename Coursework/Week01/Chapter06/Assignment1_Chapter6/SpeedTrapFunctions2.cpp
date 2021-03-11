#include "SpeedTrapFunctions2.h"

#include <iostream> 
#include <iomanip>
#include <ctime> 
#include <cstdlib>
#include <stdio.h> 

using namespace std; 

int milesPerHourOverSpeedLimit(int vehicleSpeed, int speedLimit);
float calculateFine(int milesPerHourOverSpeedLimit, float baseFine);

int main() {

	enum class ApplicationStatus : int {
		CONTINUE, STOP //each enum value represented by an int
	};

	ApplicationStatus appStatus;
	appStatus = ApplicationStatus::CONTINUE;

	static float baseSpeedingFine = 60.25;

	// config randomization generator
	srand(static_cast<unsigned int>(time(0)));
	
	int userInputSpeed{ 0 };

	float ticketFineTotal;

	while (appStatus == ApplicationStatus::CONTINUE) {
		userInputSpeed = 0;
		int speedLimit{ 25 + rand() % 40 };

		cout << "Please enter the speed of the vehicle\n";
		cin >> userInputSpeed;

		cout
			<< "Speed Limit is: "
			<< speedLimit
			<< ",\n"
			<< "Your speed is: "
			<< userInputSpeed
			<< "\nThe fine for the speed of the vehicle is: ";

		int mphOver{ milesPerHourOverSpeedLimit(
			userInputSpeed,
			speedLimit) };


	}

}










