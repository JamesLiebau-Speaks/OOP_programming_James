#include "Card.hpp"

std::vector<std::string> Card::faceNames { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
std::vector<std::string> Card::suitNames {"♥", "♦", "♣", "♠"};


// Accessor Functions
int Card::getFace() const {
    return face;
}

int Card::getSuit() const {
    return suit;
}

// Constructor
Card::Card(int face_num, int suit_num) : face (face_num), suit (suit_num) { }

// toString Function - returns card suit/face as a string
std::string Card::toString() const{
    return faceNames[face] + suitNames[suit];
}
