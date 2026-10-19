#include <iostream>
#include "Hand.hpp"

void Hand::takeCards(Deck& deck){
    hand.clear();
    for(int i = 0; i < 5; i++){
        if (deck.moreCards()){
            hand.push_back(deck.dealCard());
        }
    }
}
bool Hand::isFullHand(){
    return hand.size() == 5;
}
void Hand::print() const{
    for(int i = 0; i < hand.size(); i++){
        std::cout << hand[i].toString() << " ";
        
    }
    std::cout << std::endl;
}
bool Hand::hasPair() const{
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
bool Hand::hasTwoPairs() const{
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
bool Hand::hasThreeOfAKind() const{
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