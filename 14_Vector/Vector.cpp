#include "Vector.hpp"
#include <iostream>

Vector::Vector(int capacity) : size(0) {
    data = new int[capacity];
}


void Vector::push_back(int val){
    data[size] = val;
    size++;
    // TODO
    // What if the size reaches the capacity???
}


void Vector::print() const{
    std::cout << "[ ";
    // print the elements
    for (int i = 0; i< size; i++){
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
}