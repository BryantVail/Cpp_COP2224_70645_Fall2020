// RandomArrayEvaluation.cpp


#include <cstring>
#include <cstdlib>

#include "RandomArrayEvaluation.h"

const char* RandomArrayEvaluation::returnRandomIndex(
	char* arrayPtr[],
	int length) {
	return arrayPtr[(1 + (rand() % length))];
}






