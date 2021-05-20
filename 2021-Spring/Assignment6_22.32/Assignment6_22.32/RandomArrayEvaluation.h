
#ifndef RandomArrayEvaluation_h
#define RandomArrayEvaluation_h

#include <cstring>

class RandomArrayEvaluation
{
public:
	const char *returnRandomIndex();

	RandomArrayEvaluation(char *arrayPtr[], unsigned int length);

	char sentence[100]{};
	unsigned int length;
};

#endif