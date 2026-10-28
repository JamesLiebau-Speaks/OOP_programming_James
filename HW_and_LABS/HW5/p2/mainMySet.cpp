#include <iostream>
#include "MySet.hpp"

int main(void){
    MySet set(20);
    set.insertElement(13);
    set.insertElement(7);
    set.insertElement(20);
    set.insertElement(21);
    set.printSet();
    set.deleteElement(22);
    set.deleteElement(13);
    set.printSet();
    MySet set2(100);
    set2.printSet();
    MySet set3(set);
    if (set3.isEqualTo(set)){
        std::cout << "set3.isEqualTo(set) = 1";
    }
    else{
        std::cout << "set3.isEqualTo(set) = 0";
    }
    return 0;
}
