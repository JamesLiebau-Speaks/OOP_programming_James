#include <string>


char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isPalindrome(const std::string& s, int left, int right) {
    if (left >= right) {
        return true;
    }
    
    if (toLower(s[left]) != toLower(s[right])) {
        return false;
    }
    
    return isPalindrome(s, left + 1, right - 1);
}
int findMax(const int arr[], int size) {
    if (size == 0) {
        return arr[0];
    }
    
    int maxOfRest = findMax(arr, size - 1);
    
    if (arr[size] > maxOfRest) {
        return arr[size];
    } else {
        return maxOfRest;
    }
}