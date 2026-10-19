// Create a pyramid
#include <iostream>
#include <iomanip>

int main(void){
    int width;
    std::cout << "Enter a number from 1 to 15: ";
    std::cin >> width;
    if(width > 15){
        std::cout << "Number too large" << std::endl;
        return 1;
    }
    else if(width < 1){
        std::cout << "Number too small" << std::endl;
        return 1;
    }
    int n = width;
        for(int row = 1; row <= width; row++){
                for (int space = width; space > row; --space) {
                    if(space >= 10){
                        std::cout << "    ";
                    }
                    else{
                        std::cout << "   ";
                    }
                }
                for(int i = width; i < width - row; --i){
                    if(width > 9){
                        std::cout << "   ";
                    }
                }
                for(int num = row; num >= 2; num--){
                    std::cout << num << "  ";
                }
                std::cout << "1";
                for(int num = 2; num <= row; num++){
                    std::cout << "  " << num;
                }
                std::cout << std::endl;
                n--;
        }
        

    return 0;
}