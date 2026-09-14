#include <iostream>

int main(void){
    int num = 42;
    double speed = 65.3;

    void* ptr = nullptr; // Define a void pointer

    ptr = &num; //Ptr points to num

    std::cout << "Int value via void* " << *(static_cast<int*>(ptr)) << std::endl;

    ptr = &speed;
    std::cout << "Int value via void* " << *(static_cast<double*>(ptr)) << std::endl;

}