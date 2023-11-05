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

    //practice to calculate hypotenuse of a right triangle
    // hypotenuse = sqrt(side_a^2 + side_b^2)
    double side_a = 0;
    double side_b = 0;
    std::cout << "Enter len side A:";
    std::cin >> side_a;
    std::cout << "Enter len side B:";
    std::cin >> side_b;

    double hypotenuse = sqrt(pow(side_a, 2) + pow(side_b, 2));

    std::cout << "Hypotenuse is :" << hypotenuse;
    

    return 0;
}