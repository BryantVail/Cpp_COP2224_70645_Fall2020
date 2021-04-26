// RandomSentenceGeneration.h
// 


class RandomSentenceGeneration {
public:
	char* articles[20];
	char* nouns[20];
	char* verbs[20];
	char* prepositions[20];


	RandomSentenceGeneration(
		char* articles,
		char* nouns,
		char* verbs,
		char* preposition
	);

	char* AddRandomArticle();
	char* AddRandomNoun();
	char* AddRandomVerb();
	char* AddRandomPreposition();
	const char* ConstructRandomSentence();
	const char*  ConstructRandomSentences(int numberOfSentences);
};