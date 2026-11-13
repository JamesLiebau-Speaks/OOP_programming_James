#include "Hand.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include <string>
#include <algorithm>

// Initialize static variable
int Hand::hands_dealt = 0;

Hand::Hand(Deck& deck) {
    for (int i = 0; deck.moreCards() && i < 5; i++) {
        hand.push_back(deck.dealCard());
    }
    hands_dealt++;
}

int Hand::getHandsDealt(){
    return hands_dealt;
}

void Hand::getNewHand(Deck& deck){
    hand.clear();
    for(int i = 0; i < 5; i++){
        if (deck.moreCards()){
            hand.push_back(deck.dealCard());
        }
    }
    hands_dealt++;
}
bool Hand::fullHand() const{
    return hand.size() == 5;
}
void Hand::printHand() const{
    for(int i = 0; i < hand.size(); i++){
        std::cout << hand[i].toString() << " ";
        
    }
    std::cout << std::endl;
}
bool Hand::pair() const{
    int pair_count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(hand[i].getFace() == hand[j].getFace()){
                pair_count++;
            }
            
        }
        pair_count--;
        
    }
    if(pair_count == 2){
        return true;
    }
    else{
        return false;
    }
}
bool Hand::twoPair() const{
    int pair_count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(hand[i].getFace() == hand[j].getFace()){
                pair_count++;
            }
            
        }
        pair_count--;
        
    }
    if(pair_count == 4){
        return true;
    }
    else{
        return false;
    }
}
bool Hand::threeOfAKind() const{
    for(int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(hand[i].getFace() == hand[j].getFace()){
                count++;
            }
        }
        if(count == 3){
        return true;
        }
    }
    return false;
}
bool Hand::fourOfAKind() const{
    for(int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(hand[i].getFace() == hand[j].getFace()){
                count++;
            }
        }
        if(count == 4){
        return true;
        }
    }
    return false;
}
bool Hand::flush() const{
    for(int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            if(hand[i].getSuit() == hand[j].getSuit()){
                count++;
            }
        }
        if(count == 5){
        return true;
        }
    }
    return false;
}
bool Hand::straight() const{
    int faces[5];
    for(int i = 0; i < 5; i++){
        int face = hand[i].getFace();

        if(hand[i].getFace() == 'A'){
            faces[i] = 14;
        }
        else if(hand[i].getFace() == 'J'){
            faces[i] = 11;
        }
        else if(hand[i].getFace() == 'Q'){
            faces[i] = 12;
        }
        else if(hand[i].getFace() == 'K'){
            faces[i] = 13;
        }
        else{
            faces[i] = face;
        }
    }
    std::sort(faces, faces + 5);
    for (int i = 0; i < 4; i++){
        if (faces[i + 1] != faces[i] + 1) {
            return false;
        }
    }
    return true;
}
bool Hand::straightFlush() const{
if (this->flush()){
    if(this->straight()){
        return true;
    }
}
return false;
}
bool Hand::fullHouse() const{
    int faces[5];
    for (int i = 0; i < 5; i++) {
        faces[i] = hand[i].getFace();
    }
    std::sort(faces, faces + 5);

    bool pattern1 = (faces[0] == faces[1] && faces[1] == faces[2]) && (faces[3] == faces[4]);
    bool pattern2 = (faces[0] == faces[1]) && (faces[2] == faces[3] && faces[3] == faces[4]);

    return pattern1 || pattern2;
}