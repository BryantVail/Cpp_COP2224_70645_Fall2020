// RandomSentenceGeneration.h
//
#include <stdlib.h>
using namespace std;

class RandomSentenceGeneration
{
public:
	RandomSentenceGeneration();
	char *sentencePtr[];

	const char *ConstructRandomSentence();
	const char *ConstructRandomSentences(int numberOfSentences);
};