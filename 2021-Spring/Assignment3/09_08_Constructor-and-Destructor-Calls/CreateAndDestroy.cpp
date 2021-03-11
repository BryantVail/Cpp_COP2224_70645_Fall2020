

#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

// constructor
CreateAndDestroy::CreateAndDestroy(int id, string messageString) 
	: objectId{ id }, message{ messageString } {
	cout
		<< "Object "
		<< objectId
		<< "\tConstructor Runs\t"
		<< message
		<< endl;
}

// destructor 
CreateAndDestroy::~CreateAndDestroy() {
	// output
	cout
		<< (objectId == 1 || objectId == 6
			? "\n"
			: "");

	cout
		<< "Object "
		<< objectId
		<< "\tDestructor Runs\t"
		<< message
		<< endl;

}





