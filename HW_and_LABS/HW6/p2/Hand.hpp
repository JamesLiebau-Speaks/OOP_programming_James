#ifndef HAND_HPP
#define HAND_HPP

#include "Card.hpp"
#include "Deck.hpp"
#include <vector>

class Hand{
public:
    Hand(Deck &deck);

    void getNewHand(Deck &deck);
    bool fullHand() const;

    // hand check functions
    bool pair() const;
    bool twoPair() const;
    bool threeOfAKind() const;
    bool fourOfAKind() const;
    bool flush() const;
    bool straight() const;
    bool straightFlush() const;
    bool fullHouse() const;
    
    void printHand() const;

    static int getHandsDealt();

private:
    static int hands_dealt;
    std::vector<Card> hand;
    std::vector<int> faceCount;

};

#endif
