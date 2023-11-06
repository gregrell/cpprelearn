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
    char unit;
    double inTemp;
    double convertedTemp;

    std::cout << "*****  Temp conversion *****\n";
    std::cout << "Enter the unit to convert from:";    
    std::cin >> unit;
    std::cout << "Enter the temperature:\n";    
    std::cin >> inTemp;

    if(unit == 'f' || unit == 'F'){
        //convert F to C
        convertedTemp = (inTemp-32)/1.8;
        std::cout << inTemp << "F = " << convertedTemp << " C\n";
    }
    else if(unit =='c'|| unit=='C'){
        //convert C to F
        convertedTemp = (1.8 * inTemp) + 32;
        std::cout << inTemp << "C = " << convertedTemp << " F\n";

    }


    std::cout << "****************************";

   
    return 0;
}