// c++ example: Functions

#include "functions.h"

int main()
{
    int x = 5, y = 3, z;
    double u = 3.43, v = 5.13, w;

    z = functions::additionByVal(x, y);
    std::cout << "additionByVal: " << z << std::endl;

    functions::additionByRef(x, y, z);
    std::cout << "additionByRef: " << z << std::endl;

    z = functions::addition<int>(x, y);
    std::cout << "additionT<int>: " << z << std::endl;
    w = functions::addition<double>(u, v);
    std::cout << "additionT<double>: " << w << std::endl;

    if (functions::are_equal(y, u))
        std::cout << "int " << y << ", and double " << u
                  << " are equal" << std::endl;
    else
        std::cout << "int " << y << ", and double " << u
                  << " are not equal" << std::endl;

    std::string a, b;
    a = "It's a beautiful day. ";
    b = "Let's go for a swim!";
    std::cout << "concatStrings: " << functions::concatStrings(a, b)
              << std::endl;

    long number = 5;
    std::cout << "factorial: " << number << "! = "
              << functions::factorial(number) << std::endl;

    return 0;
}

