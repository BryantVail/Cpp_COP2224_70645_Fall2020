// HeaderFileExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;

#include <iostream>
#include "Log.h";
//#include "Log.h";
/*
	Error	C2011	'Player': 'struct' type
	redefinition	HeaderFileExample	
	C:\Users\bvail\Documents\GitHub\C+
		+_COP2224_70645_Fall2020\2021-Spring\Ch01
		\HeaderFileExample\Log.h	16	
*/

int main() {
	InitLog();
	Log("Hello World");
	cin.get();
}

// put definition in Log.h
/*void Log(const char* message) {
	cout << message << endl;
}*/

