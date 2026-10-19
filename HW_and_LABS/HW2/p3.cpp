#include <iostream>
int evenCount(unsigned int value);

int main(void){
    
    std::cout << "Enter the number ";
    int x;
    std::cin >> x;
    std::cout << " The number of even digits is " << evenCount(x) << std::endl;
}

int evenCount(unsigned int value){
    int current = value % 10;

    if(value == 0){
        return 0;
    }
    int isEven = ((current % 2) == 0) ? 1 : 0;
    return isEven + evenCount(value/10);
}