#pragma once

#include <iostream>
#include <string>

// declarations
namespace functions {

/* regular functions
------------------------------------------------------------------------------*/
// variables passed by value
int additionByVal(int a, int b);
// variables passed by reference
void additionByRef(int a, int b, int &r);
// constants passed by reference
std::string concatStrings(const std::string &a, const std::string &b);
// a recursive function
long factorial(long a);

/* function templates
    when used in class/struct/etc, they must be defined in header file
    if they are declared in h namespace and defined in cpp namespace, then
    they are undefined in files which include h... wow!!!
    otherwise, they may be declared as for example:
    template <class T> T addition(T a, T b);
    template <typename T, class U> bool are_equal(T a, U b);
    and defined later on in code
------------------------------------------------------------------------------*/
template <class T>
T addition(T a, T b)
{
    T result;
    result = a + b;
    return result;
}
// 'are_equal' template with more than one parameters
template <typename T, class U>
bool are_equal(T a, U b)
{
    return (a == b);
}
}

