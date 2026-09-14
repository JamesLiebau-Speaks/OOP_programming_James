#include <iostream>
#include <string>
#include <ctime>

void countdown(int n);
void countup(int n);

int power(int base, int exp);

void print_binary(int number);

int main(void) {
    countdown(10);
    countup(10);
    power(2, 10);

    print_binary(150);
    return 0;
}
void countdown(int n){
    //base case
    if (n <= 0) {
        return;
    }
    //recursive case
    std::cout << n << "\t";
    countdown(n - 1);
}
void countup(int n){
    //base case
    if (n <= 0) {
        return;
    }
    //recursive case
    countup(n - 1);
    std::cout << n << "\t";
}

int power(int base, int exp){
    //base case
    if (exp == 0) {
        printf("I am power (%d, %d). I know the answer is 1!\n\n", base, exp);
        return 1;
    }
    printf("I am the power (%d, %d). \n", base, exp);
    printf("I remember %d and ask power (%d, %d) for help!\n\n", base, base, exp);
    int help = power(base, exp -1);
    printf("I am the power (%d, %d).\n", base, exp);
    printf("power (%d, %d) returned me %d.\n", base, exp -1, help);
    printf("I will do %d * %d = %d and return the result\n\n", base, help, base * help);
    return base * help;
}

void print_binary(int number) {
    if (number <2) {
        std::cout << number;
        return;
    }
    print_binary(number/2);
    std::cout << number % 2;
}