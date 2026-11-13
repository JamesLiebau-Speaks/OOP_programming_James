#include "MyVector.hpp"

#include <iostream>
#include <string>

int main(void) {
    // Test logical operators
    MyVector<double> *mv1 = new MyVector<double>;
    MyVector<double> *mv2 = new MyVector<double>;
    if (*mv1 == *mv2) {
        std::cout << "Test 1 (empty == empty): PASSED\n";
    }
    for (int i = 1; i < 10; i++) {
        mv1->push_back((double) i * i / (i + i));
        mv2->push_back((double) i * i / (i + i));
    }
    if (!(*mv1 != *mv2)) {
        std::cout << "Test 2 (same content): PASSED\n";
    }
    
    mv1->pop_back();
    if (!(*mv1 == *mv2)) {
        std::cout << "Test 3 (different size): PASSED\n";
    }
    
    mv1->push_back(7.7);
    if (*mv1 != *mv2) {
        std::cout << "Test 4 (same size, different content): PASSED\n";
    }
    
    delete mv1;
    delete mv2;
    
    ///////////////////////////////////////////////////////////
    MyVector<std::string> *mv3 = new MyVector<std::string>;
    MyVector<std::string> *mv4 = new MyVector<std::string>;
    
    mv3->push_front("abc");
    mv3->push_front("def");
    mv4->push_back("abc");
    mv4->push_back("def");
    
    if (*mv3 > *mv4) {
        std::cout << "Test 5 (>): PASSED\n";
    }
    
    mv3->erase(0);
    if (*mv3 < *mv4) {
        std::cout << "Test 6 (<): PASSED\n";
    }
    
    mv3->push_back("de");
    if (*mv3 <= *mv4) {
        std::cout << "Test 7 (<=): PASSED\n";
    }
    
    ///////////////////////////////////////////////////////////
    // Test +, =, <<
    MyVector<std::string> *mv5 = new MyVector<std::string>;
    *mv5 = *mv3 + *mv4 + *mv3 + *mv4 + *mv3 + *mv4 + *mv3 + *mv4;
    std::cout << *mv5;

    delete mv3;
    delete mv4;
    delete mv5;
    
    return 0;
}
