#include <iostream>
#include <string>


class MyException {
public:
    MyException(int err_code) : err_code(err_code){

    }

    void printInfo() const{
        std::cout << "Exception code: " << err_code << std::endl;
    }
private:
    int err_code;
};
class Fraction {
public:
    Fraction(int n = 0, int d = 1) : num(n), denom(d) {

    }

    double quotient() const {
        if (denom == 0) {
            throw "Invalid Fraction";
        }
        else if ((num < 0 && denom > 0) || (num > 0 && denom < 0)){
            throw std::string("Negative fraction");
        }
        else if ((static_cast<double>(num) / denom) > 100){
            throw MyException(100);
        }
        return static_cast<double>(num) / denom;
    }
private:
    int num;
    int denom;
};

int main(void){
    int n1, n2;

    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction fr(n1,n2);
    try {
        std::cout << fr.quotient() << std::endl;
        std::cout << "End of try\n";
    }
    catch (int ex) {
        std::cout << "Error code: " << ex << std::endl;
    }
    catch (const char* ex){
        std::cout << "Error code: " << ex << std::endl;
    }
    catch (const std::string& ex){
        std::cout << "Error code: " << ex << std::endl;
    }
    catch (...){
        std::cout << "Other type of exception" << std::endl;
    }
    std::cout << "Program Continues" << std::endl;

    return 0;
}