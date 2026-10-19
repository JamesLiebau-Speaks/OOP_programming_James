#include <iostream>
#include <string>

bool isPalindrome(const std::string& s, int left, int right);
int findMax(const int arr[], int size);


int main(void) {
    std::cout << "Enter a string: ";
    std::string s;
    getline(std::cin, s);

    std::cout << ((isPalindrome(s, 0, s.length() - 1)) ? "YES" : "NO") << std::endl;

    int arr1[5] = {11, 2, 10, 4, 5};
    int arr2[5] = {11, 2, 100, 4, 5};
    int arr3[5] = {11, 2, 10, 4, 50};

    std::cout << findMax(arr1, 4) << std::endl;
    std::cout << findMax(arr2, 4) << std::endl;
    std::cout << findMax(arr3, 4) << std::endl;

    return 0;
}
