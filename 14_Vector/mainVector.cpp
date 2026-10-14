#include "Vector.hpp"


int main(void) {
    Vector v(10);
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    v.print();

    return 0;
}