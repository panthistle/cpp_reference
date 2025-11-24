// c++ example: Statements

#include <iostream>
#include <string>

//declarations

void ifElse(int x);
void switchCase(int x);
void forLoop(int val, int limit, int step);
void forLoopRange(std::string val);
void whileLoop(int val, int limit);
void dowhileLoop(int val, int limit);

int main()
{
    ifElse(32);
    switchCase(4);
    whileLoop(3, 8);
    dowhileLoop(2, 7);
    forLoop(4, 11, 2);
    forLoopRange("Pan");

    return 0;
}

