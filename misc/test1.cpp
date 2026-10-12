#include <iostream>

int main(){
    float x = 12.2;
    float* pX = &x;

    //printing the value of x through the pointer
    std::cout << *pX;
    return 0;
}