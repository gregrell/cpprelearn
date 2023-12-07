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
    system("clear");
    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin,name);

    std::cout << name.length() << name.append(" piss ass");
 
   
    return 0;
}