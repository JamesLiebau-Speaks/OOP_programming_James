#ifndef PERSON_HPP
#define PERSON_HPP

class Person{
public:
    // Argument constructor
    Person(const char* name, int age);
    
    // Destructor
    ~Person();

    // Copy constuctor
    Person(const Person& other);

    // Methods
    void display() const;
private:
    int age;
    char* name;
};

#endif