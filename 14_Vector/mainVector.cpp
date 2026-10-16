#include "Vector.hpp"
#include <iostream>

void foo(Vector vec){
    std::cout << "foo function" << std::endl;
}

int main(void) {
    Vector v(10);
    
    for(int i = 0; i < 150; i++){
        v.push_back(i);
    }
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    v.print();

    Vector v2 = v;
    // foo(v);

    std::cout << v2.at(1) << std::endl;

    return 0;
}