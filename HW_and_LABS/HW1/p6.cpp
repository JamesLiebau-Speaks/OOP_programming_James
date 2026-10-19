#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
int main(void){
    int userNUM;
    int sum = 0;
    int finalSum;
    
    std::cout << "Enter an integer between 0 and 1000000: ";
    std::cin >> userNUM;
    
    if (userNUM < 0){
        std::cout << "The program does not accept negative numbers" << std::endl;
    }
    if (userNUM > 1000000){
        std::cout << "The given number is too large" << std::endl;
    }

    do{
        sum = sum + userNUM % 10;
        userNUM = userNUM / 10;
    }while(userNUM > 0);
    userNUM = sum;
    std::cout << "The sum of the digits is " << sum << "." << std::endl;
    sum = 0;
    for(int i=1; i > 0; i++){
        if(std::to_string(finalSum).length() <= 1){
            break;
        }
        do{
            sum = sum + userNUM % 10;
            userNUM = userNUM / 10;
        }while(userNUM > 0);
        finalSum = sum;
    }
    std::cout << "The repeated sum of digits is " << finalSum << "." << std::endl;
    

    return 0;
}