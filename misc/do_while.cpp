#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int data = 0;
    do {
        // Read the next data
        // cout << "Enter an integer (the input ends " << 
        // "if it is 0): ";
        cin >> data;
        sum += data;
    } while (data != 0); // Keep reading data until the input is 0 

  cout << "The sum is " << sum << endl;

  return 0;
}
