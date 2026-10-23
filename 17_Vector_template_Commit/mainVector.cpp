#include "Vector.hpp"
#include <iostream>

int main(void) {
    // Create a Vector object dynamically
    Vector<double> *mvPtr = new Vector<double>(10);

    for (int i = 0; i < 100; i++) {
        mvPtr->push_back(i * (static_cast<double>(i) / 10));
    }

    // Test clear
    mvPtr->print();
    mvPtr->clear();
    std::cout << mvPtr->getCapacity() << std::endl;
    mvPtr->print();


    // Test insert
    mvPtr->insert(-1, 20);
    mvPtr->insert(0, 1);
    for (int i = 1; i < 19; i++) {
        mvPtr->insert(i, i + 1);
    }
    mvPtr->print();
    
    // Test push_front
    for (int i = 1; i < 19; i++) {
        mvPtr->push_front(i * -1);
    }
    mvPtr->print();

    // Test at
    for (int i = 0; i < mvPtr->getSize(); i++) {
        std::cout << mvPtr->at(i) << ' ' << mvPtr->at(-(i + 1)) << std::endl;
    }


    //std::cout << mvPtr->getCapacity() << std::endl;
    std::cout << mvPtr->getSize() << std::endl;
    mvPtr->resize(10, 10);
    mvPtr->print();
    std::cout << mvPtr->getSize() << std::endl;

    std::cout << mvPtr->getSize() << std::endl;
    mvPtr->resize(200, 10);
    mvPtr->print();
    std::cout << mvPtr->getSize() << std::endl;
    
    delete mvPtr;
    
    return 0;
}
