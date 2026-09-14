#include <iostream>

int i = 1;

void f() {
    if (i == 100) {
        std::cout << "Enough!\n";
        return;
    }
    std::cout << i++ <<  " - Hello!" << std::endl;
    f();
}

int main(void) {

    f();
    return 0;
}