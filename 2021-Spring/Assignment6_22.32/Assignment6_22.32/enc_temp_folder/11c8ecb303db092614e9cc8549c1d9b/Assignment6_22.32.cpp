// Assignment6_22.32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "string.h"
#include <cstring>
#include "RandomArrayEvaluation.h"
using namespace std;

int main()
{
    // initialize random engine
    srand(static_cast<unsigned int>(time(0)));

    const char *article[]{"the", "a", "one", "some", "any"};
    unsigned int articleLength{5};
    const char *noun[]{"boy", "girl", "dog", "town", "car"};
    unsigned int nounLength{5};
    const char *verb[]{"drove", "jumped", "ran", "walked", "skipped"};
    unsigned int verbLength{5};
    const char *preposition[]{"to", "from", "over", "under", "on"};
    unsigned int prepositionLength{5};

    // array
    char sentence[1000]{};
    char newLine[1]{ '\n' };
    
    size_t iterator{0};
    while (iterator < 20)
    {
        size_t index;
        // Start Sentence with Article
        index = (rand() % (articleLength - 1));
        // set first char toupper(...)
        strcat_s(sentence, article[index]);
        sentence[0] = toupper(sentence[0]);
        

        // Noun
        strcat_s(sentence, " ");
        index = (rand() % (nounLength - 1));
        strcat_s(sentence, noun[index]);

        // Verb
        strcat_s(sentence, " ");
        index = (rand() % (verbLength - 1));
        strcat_s(sentence, verb[index]);

        // Preposition
        strcat_s(sentence, " ");
        index = (rand() % (prepositionLength - 1));
        strcat_s(sentence, preposition[index]);

        // 2nd Article
        strcat_s(sentence, " ");
        index = (rand() % (articleLength - 1));
        strcat_s(sentence, article[index]);

        // 2nd Noun
        index = (rand() % (nounLength - 1));
        strcat_s(sentence, " ");
        strcat_s(sentence, noun[index]);
        strcat_s(sentence, ".");

        strcat_s(sentence, "\n");
        iterator++;
    }

    cout << sentence;
}
