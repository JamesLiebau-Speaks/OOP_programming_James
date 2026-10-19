#include "Math.hpp"
#include <cmath>


int Math::square(int n) {
    return n * n;
}

int Math::add(int n1, int n2) {
    return n1 + n2;
}
bool Math::isPrime(int pr){
    if(pr<1){
        return false;
    }
    else{
        for(int i = 2; i < pr/2; i++){
            if(pr % i == 0){
                return false;
            }
        }
        return true;
    }
}
int Math::power(int a, int b){
    int pow = a;
    for(int i = 1; i < b; i++){
        pow = pow * a;
    }
    return pow;
}
int Math::parseInt(const std::string& str){
    int in1 = std::stoi(str);
    return in1;
}