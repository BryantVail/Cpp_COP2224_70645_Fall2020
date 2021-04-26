// figure 22.03:
// DeckOfCards.cpp

#include <iostream>
#include <iomanip>
#include <cstdlib> // rand and srand
#include <ctime>   // prototype for time
#include "DeckOfCards.h"
using namespace std;

// constructor, empty
DeckOfCards::DeckOfCards()
{
  static string suit[suits]{"Hearts", "Diamonds", "Clubs", "Spades"};

  static string face[faces]{"Ace", "Deuce", "Three", "Four", "Five",
                            "Six", "Seven", "Eight", "Nine", "Ten",
                            "Jack", "Queen", "King"};

  // set values to the deck of cards
  for (size_t i{0}; i < deck.size(); ++i)
  {
    deck[i].face = face[i % faces];
    deck[i].suit = suit[i / faces];
  }

  srand(static_cast<size_t>(time(nullptr))); // seed
} // end DeckOfCards()

// shuffle()
void DeckOfCards::shuffle()
{
  // shuffle cards randomly
  for (size_t i{0}; i < deck.size(); ++i)
  {
    int j{rand() % this->numberOfCards};
    Card temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
  }
}

// deal cards in deck
void DeckOfCards::deal() const
{
  // display each card's face & suit
  for (size_t i = 0; i < deck.size(); ++i)
  {
    cout
        << right << setw(5)
        << deck[i].face << " of "
        << left << setw(8)
        << deck[i].suit
        << ((i + 1) % 2 ? '\t' : '\n');
  }
}
