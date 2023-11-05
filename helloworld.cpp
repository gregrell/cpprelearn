#include <iostream>
#include <cmath>

namespace one{
    std::string name = "Ass";
}

namespace two{
    std::string name = "Poo";
}

typedef std::string mystring_t;
using myotherstring_t = std::string; // this is preferred instead of typedefs because of templates

int main(){

    double a;
    double b;
    char op;
    double result;

    std::cout << "Enter first number:";
    std::cin >> a;
    std::cout << "Enter operator:";
    std::cin >> op;
    std::cout << "Enter second number:";
    std::cin >> b;
    
    std::cout << "Evaluating " << a << op << b << "\n\n";

    switch(op){
        case '+':
            result = a+b;
            break;
         case '-':
            result = a-b;
            break;    
    }
    
    std::cout << "Result:  " << result;






    return 0;
}