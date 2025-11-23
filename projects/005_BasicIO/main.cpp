// c++ example: BasicIO

#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    int x = 10;
    std::cout << "Literal: " << 120 << ", integer: " << x << std::endl;

    std::cout << "\nFirst sentence.\n";
    std::cout << "Second sentence.\nThird sentence.\n"
              << std::endl;

    int i;
    std::string mystr;
    std::cout << "Enter an integer number: ";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> i;
    std::cout << "Your lucky number is: " << i << "\n\n";
    std::cout << "What's your name? ";
    std::getline(std::cin, mystr);
    std::cout << "Hello " << mystr << ".\n";

    return 0;
}
