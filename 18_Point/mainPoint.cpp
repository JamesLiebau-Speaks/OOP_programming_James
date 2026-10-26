#include "Point.hpp"
#include <iostream>

int main(void){
    Point p1(2, 3);
    Point p2(6, 5);
    Point p3(87, 88);

    std::cout << p3.toString() << std::endl;
    
    if(p1 != p2){
        std::cout << (char) p3[0];
    }
    else{
        std::cout << (char) p3[1];
    }
    p1[0] = 40 + 44;
    std::cout << (char) p1[0];

    p1[1] = p1[1] + 3;
    p2[1] = p2[1] + 4;
    Point p4 = p1 * p2;
    std::cout << (char) (p4[1] - 2);

    std::cout << "TU";

    return 0;
}