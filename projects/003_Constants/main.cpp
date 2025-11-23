// c++ example: Constants

#include <iostream>

// pre-processor constant definition
#define ICA 12

int main()
{
    const int ICB = 15; // integer
    int res = ICB + ICA;
    const char CC = 'W';        // single character
    const char CS[] = "Result"; // character sequence (c-string)

    std::cout << "Single char: " << CC << std::endl;
    std::cout << CS << ": " << res << std::endl;

    return 0;
}
