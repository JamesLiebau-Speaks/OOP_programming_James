#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <iostream>
#include <vector>

class Deck{
public:
    Deck(int shuffle_seed = 1);
    void shuffle();
    Card dealCard();
    bool moreCards() const;

  private:
    std::vector<Card> deck;
    int current_card;
    int shuffle_seed;
};

#endif
