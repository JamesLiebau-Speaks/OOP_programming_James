#ifndef CARD_HPP
#define CARD_HPP
#include <string>
#include <vector>

class Card{
public:
    // Card Constructor
    Card(int face_num, int suit_num);
    
    // Accessor Definition
    int getFace() const;
    int getSuit() const;
    std::string toString() const;
private:
    // Defined private data feilds
    int face;
    int suit;

    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;
};


#endif