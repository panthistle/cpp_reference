// c++ example: Pointers

#include <iostream>
#include <string>

// array pointer in function parameter list
void ArrayArgs(int *Arr)
{
    *Arr = 10;       // modify value at position 0, Arr[0] = 10;
    Arr++;           // point at next position: Arr[1]
    *Arr = 20;       // Arr[1] = 20;
    Arr += 1;        // point at next position: Arr[2]
    *Arr = 30;       // Arr[2] = 30;
    *(Arr + 1) = 40; // Arr[3] = 40;
    *(Arr + 2) = 50; // Arr[4] = 50;
}

// normal and constant array pointers in function parameter list
void PointerArgs(int *pVar, const int *cpVar)
{
    // constant pointer can point to address of different elements
    // and read values ONLY - they CAN'T modify values
    std::cout << "const ptr read value of el 0: " << *cpVar << std::endl;
    cpVar++; // point at next address
    std::cout << "const ptr moved to address: " << cpVar << std::endl;
    std::cout << "const ptr read value of el 1: " << *cpVar << std::endl;
    // normal pointer CAN modify values
    *pVar += 2;
}

int addition(int a, int b)
{
    return (a + b);
}

int subtraction(int a, int b)
{
    return (a - b);
}

// function pointer parameter
int operation(int x, int y, int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(x, y);
    return g;
}

int main()
{
    // int variable
    int v = 25;
    // int pointer variable
    int *p;
    // p stores the address of v
    p = &v;
    std::cout << "The address of 'v' is: " << p << std::endl;

    // a dereferenced pointer returns the value of the variable it points to
    std::string equals = *p == v ? "True" : "False";
    std::cout << "Are 'v' and '*p' the same? " << equals << std::endl;

    // array pointer passed in a function
    int nums[5];
    ArrayArgs(nums);
    for (int n = 0; n < 5; n++)
        std::cout << nums[n] << ", ";
    std::cout << "\narray pointer deref *(nums + 4): "
              << *(nums + 4) << std::endl;

    // pointers as arguments
    int *pn = nums;
    int *cpn = nums;
    std::cout << "const ptr address before func: " << cpn << std::endl;
    PointerArgs(pn, cpn);
    std::cout << "access/modify nums[0]: " << nums[0] << std::endl;
    std::cout << "const ptr address after func: " << cpn << std::endl;

    // pointers to functions
    int m, n;
    int (*minus)(int, int);
    minus = subtraction;
    std::cout << "13 - 9 = " << minus(13, 9) << std::endl;
    m = operation(7, 5, addition);
    n = operation(20, m, subtraction);
    std::cout << "20 - 12 = " << n << std::endl;

    return 0;
}
