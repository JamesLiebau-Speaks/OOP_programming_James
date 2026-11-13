#include "Card.hpp"
#include "Deck.hpp"
#include "Hand.hpp"

#include <iostream>

int main(void) {
    ////////////// Test Deck ////////////////
    int seed;
    std::cout << "Enter seed: ";
    std::cin >> seed; 
        
    Deck myDeck(seed);
    myDeck.shuffle();
    Hand h(myDeck);
    
    bool pair = false;
    bool two_pair = false;
    bool three_of_kind = false;
    bool four_of_kind = false;
    bool flush = false;
    bool straight = false;
    bool full_house = false;

    while (1) {
        if (!myDeck.moreCards() || !h.fullHand()) {
            myDeck.shuffle();
            h.getNewHand(myDeck);
        }
        if (!three_of_kind && h.threeOfAKind()) {
            three_of_kind = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get three of a kind" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!pair && h.pair()) {
            pair = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get a pair" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!two_pair && h.twoPair()) {
            two_pair = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get two pairs" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!four_of_kind && h.fourOfAKind()) {
            four_of_kind = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get four of a kind" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!flush && h.flush()) {
            flush = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get a flush" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!straight && h.straight()) {
            straight = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get a straight" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (!full_house && h.fullHouse()) {
            full_house = true;
            std::cout << "It took " << Hand::getHandsDealt() << " hands to get a full house" << std::endl;
            h.printHand();
            std::cout << std::endl;
        } 
        if (    pair && two_pair && three_of_kind && four_of_kind &&
                flush && straight && full_house) {
            break;
        }
        h.getNewHand(myDeck);
    }
    
    return 0;
}
