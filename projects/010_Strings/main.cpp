// c++ example: Strings

#include <iostream>
#include <string>

int main()
{
    // c++ strings and c strings (NTCS: NullTerminatedCharacterSequences)
    // cin will stop at first space
    // getline() gets confused with mixed string types
    char question1[] = "What is your name? ";
    char question2[] = "Where do you live? ";
    std::string answer1;
    std::string answer2;
    std::cout << question1;
    std::getline(std::cin, answer1);
    std::cout << question2;
    std::getline(std::cin, answer2);
    std::cout << "Hello, " << answer1;
    std::cout << " from " << answer2.c_str() << "!\n";

    return 0;
}

