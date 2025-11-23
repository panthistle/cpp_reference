// c++ example: Variables

#include <iostream>
#include <string>

int main()
{
    // variable declaration and initialization
    int v;      // integer type declared uninitialized
    v = 5;      // initialization after declaration
    int x = 10; // c-like initialization
    int y(12);  // constructor initialization
    int z{15};  // uniform initialization

    // type deduction
    auto e = x;    // initialization: same as int e = x;
    decltype(y) k; // declaration: same as int k;
    k = 2;

    std::cout << "v: " << v << "\n"
              << "x: " << x << "\n"
              << "y: " << y << "\n"
              << "z: " << z << "\n"
              << "e: " << e << "\n"
              << "k: " << k << std::endl;

    std::string mystr;
    std::cout << "Enter some text: ";
    std::getline(std::cin, mystr);
    //std::cin >> mystr;
    std::cout << "you typed: " << mystr << std::endl;

    return 0;
}

