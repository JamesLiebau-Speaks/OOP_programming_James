#include "MySet.hpp"
#include <iostream>

// Constructor
MySet::MySet(unsigned n) : range(n), size(0) {
    set = new bool[range + 1];
    
    for (unsigned int i = 0; i < range + 1; i++){
        set[i] = false;
    }
}

// Copy-Constructor
MySet::MySet(const MySet &other) : range(other.range), size(0) {
    set = new bool[range + 1];
    
    for (unsigned int i = 0; i < range + 1; i++){
        set[i] = other.set[i];
    }
}

// Destructor
MySet::~MySet(){
    delete [] set;
}
	
// Memeber Functions
void MySet::insertElement(int k){
    if(k < 0 || static_cast<unsigned int>(k) > range){
        std::cout << "Warning: cannot insert element " << k << " into MySet. Outside of range [0, " << range << "].\n";
    }
    else{
        set[k] = true;
        size++;
    }
}
void MySet::deleteElement(int m){
    if(m < 0 || static_cast<unsigned int>(m) > range){
        std::cout << "Warning: cannot delete element " << m << " from MySet. Outside of range [0, " << range << "].\n";
    }
    else{
        set[m] = false;
        size--;
    }
}
void MySet::printSet(){
    if(size == 0){
        std::cout << "{ --- }\n";
        return;
    }
    std::cout << "{ ";
    for (unsigned int i = 0; i < range + 1; i++){
        if (set[i] == false){
            if(i == range){
                //std::cout << i;
                break;
            }
            continue;
        }
        else if (set[i] == true){
            if(i == range){
                std::cout << i;
                break;
            }
            std::cout << i << ", ";
        }
    }
    std::cout << " }\n";
}
bool MySet::isEqualTo(const MySet& other) const{
    unsigned int max_limit = (range > other.range) ? range : other.range;
    
    for (unsigned int i = 0; i < max_limit + 1; i++){
        bool selfV = (i < range + 1) ? set[i] : false;
        bool otherV = (i < other.range + 1) ? other.set[i] : false;
        if(selfV != otherV){
            return false;
        }
    }
    return true;
}
