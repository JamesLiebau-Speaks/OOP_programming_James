#include "Person.hpp"
#include <iostream>
#include <cstring>


// Argument constructor
Person::Person(const char* name, int age) : age(age){
    this -> name = new char[strlen(name) + 1];
    std::strcpy(this -> name, name);
}
    
// Destructor
Person::~Person(){
    delete[] name;
}

// Copy constuctor
Person::Person(const Person& other) : age(other.age){
    if(other.name != nullptr){
        this -> name = new char[strlen(other.name) + 1];
        std::strcpy(this -> name, other.name);
    }
    else {
        this -> name = nullptr;
    }
}

// Methods
void Person::display() const{
    std::cout << "Age: " << age << std::endl;
    if(name != nullptr){
        std::cout << "Name: " << name << std::endl;
    }
    else{
        std::cout << "Name: nullptr" << std::endl;
    }
}