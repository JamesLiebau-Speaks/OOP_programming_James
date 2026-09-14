#include <iostream>


int add(int a, int b){return a+b;}
int subtract(int a, int b){return a-b;}

//function that takes a function pointer
int operate(int a, int b, int (*operation)(int,int)){
    return operation(a,b);
}

int main(void){
    std::cout << "Addition: " << operate(10, 13, add) << std::endl;
    std::cout << "Subtraction: " << operate(10, 13, subtract) << std::endl;
}