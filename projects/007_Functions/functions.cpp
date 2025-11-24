#include "functions.h"

// Definitions
namespace functions {

/* regular functions
------------------------------------------------------------------------------*/
// variables passed by value
int additionByVal(int a, int b)
{
    return a + b;
}

// variables passed by reference
void additionByRef(int a, int b, int &r)
{
    r = a + b;
}

/* constants passed by reference are more efficient than
   passing variables by value for expensive types */
std::string concatStrings(const std::string &a, const std::string &b)
{
    return a + b;
}

// recursive function
long factorial(long a)
{
    // avoid infinite recursive loop
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return 1;
}

}
