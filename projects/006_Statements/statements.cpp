#include <iostream>
#include <string>

//definitions

// conditional if-else
void ifElse(int x)
{
    std::cout << "\n---- If Else ----" << std::endl;
    std::string strOut;

    if (x <= 30)
    {
        if (x == 30)
            strOut = "equal to 30";
        else if( x >= 20)
        {
            strOut = "between 20 and 30";
        }
        else
            strOut = "less than 20";
    }
    else
        strOut = "greater than 30";
    std::cout << strOut << std::endl;
}

// conditional switch case
void switchCase(int x)
{
    std::cout << "\n---- Switch ----" << std::endl;
    std::string strOut;

    switch (x)
    {
    case 30:
        strOut = "equal to 30";
        break;
    case 29:
        strOut = "equal to 29";
        break;
    default:
        strOut = "number not found! switch supports only constant comparisons";
    }
    std::cout << strOut << std::endl;
}

// for loop, range
void forLoop(int val, int limit, int step)
{
    std::cout << "\n---- For Loop ----" << std::endl;

    for (int x = val; x <= limit; x += step)
    {
        if (x == 6)
        {
            std::cout << "'continue' statement skipped value: " << x << std::endl;
            continue;
        }
        std::cout << "value is: " << x << std::endl;
    }
}

// for loop, collection
void forLoopRange(std::string val)
{
    std::cout << "\n---- For Loop Range ----" << std::endl;

    for (char c : val)
    {
        std::cout << "character is: " << c << std::endl;
    }
}

// while loop
void whileLoop(int val, int limit)
{
    std::cout << "\n---- While Loop ----" << std::endl;

    while (val <= limit)
    {
        std::cout << "value is: " << val << std::endl;
        val++;
    }
}

// do-while loop
void dowhileLoop(int val, int limit)
{
    std::cout << "\n---- Do While Loop ----" << std::endl;

    do
    {
        if (val == 5)
        {
            std::cout << "'break' statement terminated loop at value: "
                      << val << std::endl;
            break;
        }
        std::cout << "value is: " << val << std::endl;
        val++;
    } while (val <= limit);
}

