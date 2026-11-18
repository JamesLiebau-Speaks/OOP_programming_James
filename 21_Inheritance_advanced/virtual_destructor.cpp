#include <iostream>

class Dad {
public:
    Dad() {
        std::cout << "Dad's constructor\n";
    }
    virtual ~Dad() {
        std::cout << "Dad's destructor\n";
    }
};
class Son : public Dad {
public:
    Son() {
        std::cout << "Son's constructor\n";
        data = new int [100];
        std::cout << "Memory was allocated\n";
    }
    ~Son() {
        std::cout << "Son's destructor\n";
        delete [] data;
        std::cout << "Memory was deallocated\n";
    }
    int* data;
};

int main(void){
    Dad* dad = new Dad;

    delete dad;

    return 0;
}