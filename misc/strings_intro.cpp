#include <iostream>
#include <string>

int main(void) {
    // Create a string
    std::string str = "Hello";

    std::cout << str << std::endl;
    std::cout << "The string size is " << str.size() << std::endl;
    
    // Append another string
    str += " World!";
    std::cout << str << std::endl;
    std::cout << "The string size is " << str.size() << std::endl;



    return 0;
}