// Put the implementation of all classes here
#include <iostream>
#include <string>
class LivingThing{
public:
    virtual void printInfo() const = 0;
};

class LivingThingTreePrinter{
public:
    static void print(const LivingThing& it){
        it.printInfo();
    }
};

class Animal : public LivingThing{
public:
std::string child1 = "Animal";
    void printInfo() const override {
        std::cout << child1 << std::endl;
    }
};


class Fish : public Animal{
public:
    std::string child2 = "Fish";
    void printInfo() const override {
        Animal::printInfo();
        std::cout << "|\n";
        std::cout << child2 << std::endl;
    }
};

class Sardine : public Fish{
public:
    std::string child3 = "Sardine";
    void printInfo() const override{
        Fish::printInfo();
        std::cout << "|\n";
        std::cout << child3 << std::endl;
    }
};

class Bass : public Fish{
public:
    std::string child3 = "Bass";
    void printInfo() const override{
        Fish::printInfo();
        std::cout << "|\n";
        std::cout << child3 << std::endl;
    }
};


class Mammal : public Animal{
public:
    std::string child2 = "Mammal";
    void printInfo() const override {
        Animal::printInfo();
        std::cout << "|\n";
        std::cout << child2 << std::endl;
    }
};

class Cat : public Mammal{
public:
    std::string child3 = "Cat";
    void printInfo() const override {
        Mammal::printInfo();
        std::cout << "|\n";
        std::cout << child3 << std::endl;
    }
};

class Tiger : public Cat{
public:
    std::string child4 = "Tiger";
    void printInfo() const override {
        Cat::printInfo();
        std::cout << "|\n";
        std::cout << child4 << std::endl;
    }
};


class Plant : public LivingThing{
public:
    std::string child1 = "Plant";
    void printInfo() const override {
        std::cout << child1 << std::endl;
    }
};

class Flower : public Plant{
public:
    std::string child2 = "Flower";
    void printInfo() const override {
        Plant::printInfo();
        std::cout << "|\n";
        std::cout << child2 << std::endl;
    }
};