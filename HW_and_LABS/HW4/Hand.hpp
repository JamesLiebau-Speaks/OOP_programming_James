#ifndef HAND_HPP
#define HAND_HPP
#include "Card.hpp"
#include "Deck.hpp"
//#include <string>
#include <vector>

class Hand{
public:
    void takeCards(Deck& deck);
    bool isFullHand();
    void print() const;
    bool hasPair() const;
    bool hasTwoPairs() const;
    bool hasThreeOfAKind() const;
private:
    std::vector<Card> hand;
};
#endif