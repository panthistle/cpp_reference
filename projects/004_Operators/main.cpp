// c++ example: Operators

#include <iostream>

int main()
{
    int a, b;
    double c = 12.5;

    // Increment/decrement operators
    a = 15;
    std::cout << "initial value of a: " << a << std::endl;
    b = ++a;
    std::cout << "prefix increment: b = ++a\n";
    std::cout << "a: " << a << ",  b: " << b << std::endl;
    b = a++;
    std::cout << "suffix increment: b = a++\n";
    std::cout << "a: " << a << ",  b: " << b << std::endl;

    // Conditional ternary operator (?)
    bool x = (b > a) ? true : false;
    std::cout << "Conditional ternary: x = b>a ? true : false\n";
    std::cout << "x: " << x << std::endl;

    // Type casting operators
    //a = (int)c;     // c-style type casting
    a = int(c); // functional notation type casting (c++ style)
    std::cout << "typecast: a=(int)c OR a=int(c)\n";
    std::cout << "a: " << a << ",  c: " << c << std::endl;

    // sizeof operator
    std::cout << "sizeof operator\n";
    std::cout << "sizeof(a): " << sizeof(a) << std::endl;
    std::cout << "sizeof(c): " << sizeof(c) << std::endl;

    return 0;
}
