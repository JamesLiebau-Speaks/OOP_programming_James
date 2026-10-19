#ifndef DECK_HPP
#define DECK_HPP
#include "Card.hpp"
//#include <string>
#include <vector>
#include <iostream>
class Deck{
public:
    // Constructor
    Deck(int seed);

    // Methods
    void shuffle();
    Card dealCard();
    bool moreCards() const;

private:
    // Members
    std::vector<Card> deck;
    int current_card;
    int shuffle_seed;
};
#endif