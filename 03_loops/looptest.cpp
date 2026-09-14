#include <iostream>
#include <string>

int main(void){
    int n = 25;
    while(n>=0){
        int count = 0; 
        count++;
        n--;
        std::cout << count << std::endl;
    }
    return 0;
}