// Figure: 22.2: DeckOfCards.h
// Deck of Playing Cards

#include <string>
#include <array>

// Card Struct(ure) definition
struct Card
{
  std::string face;
  std::string suit;
};

// class DeckOfCards
class DeckOfCards
{
public:
	static const int numberOfCards{ 52 };
	static const int faces{ 13 };
	static const int suits{ 4 };

	DeckOfCards();     // constructor
	void shuffle();    // shuffle cards in deck
	void deal() const; // deal cards in deck

private:
	std::array<Card, numberOfCards> deck;
};
