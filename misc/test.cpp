//recursion case where the function adds up all values within the array it is given
#include <iostream>

int whatIsThis(const int b[], int p);

int main(void){
    const int SIZE = 10;
    int x;

    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    x = whatIsThis(a,SIZE);
    std::cout << x;
}

int whatIsThis(const int b[], int p){
    if(1==p){
        return b[0];
    }
    else{
        return b[p - 1] + whatIsThis(b, p - 1);
    }
}