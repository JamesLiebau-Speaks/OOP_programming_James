#include <iostream>
#include <string>
#include "Box.hpp"

int main(void){
    // Create Box object
    Box<int> box(100);
    std::cout << box.getVal() << std::endl;
    
    box.setVal(1);
    Box<std::string> strBox("James Liebau-Speaks");
    std::cout << box.getVal() << std::endl;
    std::cout << strBox.getVal() << std::endl;
    
    
    return 0;
}