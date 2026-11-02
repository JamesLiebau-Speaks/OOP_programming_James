#include "Person.hpp"
#include <iostream>

int main(void){
    Person* pPer = new Person("Clementine", 21);
    Person* pPer2 = new Person(*pPer);
    //pPer -> display();
    pPer -> ~Person();
    pPer2 -> display();

    return 0;
}