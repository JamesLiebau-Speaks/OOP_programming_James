#include "Vector.hpp"
#include <iostream>
#include <climits>

Vector::Vector(int capacity) : size(0), capacity(capacity) {
    data = new int[capacity];
    std::cout << "Constructor " << this << std::endl;
}

Vector::~Vector(){
    std::cout << "Destructor " << this << std::endl;
    if(data){
        delete [] data;
    }
}

Vector::Vector(const Vector& other) : size(other.size), capacity(other.capacity) {
    std::cout << "Other Constructor " << this << std::endl;
    data = new int[capacity];

    // Copy the elements from the vector other
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
    
}
void Vector::pop_back(){
    if(empty()) {
        return;
    }
    --size;
}
int Vector::at(int index) const{
    if(index < 0 || index >= size){
        std::cout << "at: out of boundaries\n";
        return INT_MIN;
    }
    return data[index];
}

void Vector::push_back(int val){
    if(full()){
        allocateMemory(capacity * 2);
    }

    data[size] = val;
    size++;

    
}

void Vector::allocateMemory(int newCap){
    capacity = newCap;
    // Save the address of an old array
    int* old_data = data;
    
    // Allocate the new memory
    data = new int[capacity];

    // Copy the elements
    for(int i = 0; i < size; i++){
        data[i] = old_data[i];
    }
    //Deallocate old memory
    delete [] old_data;
}

bool Vector::full() const{
    return size == capacity;
}
bool Vector::empty() const{
    return size == 0;
}


void Vector::print() const{
    std::cout << "[ ";
    // print the elements
    for (int i = 0; i< size; i++){
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
}