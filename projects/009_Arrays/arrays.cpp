#include <iostream>
#include <array>

/*  c++ does not allow passing the entire c-style array memory block as an argument to
    a function. Instead, you pass the address of the c-style array (a pointer to the
    the first element - in fact that's exactly what a c-array is)  */
void PrintArray(const int *arr, int length)
{
    for (int x = 0; x < length; x++)
    {
        std::cout << arr[x] << "\t";
    }
    std::cout << std::endl;
}

/*  array variables of type <array> can pass the whole memory block as a parameter to
    a function. However, it makes sense to pass a const reference because copying of
    large memory blocks is inefficient.  */
void PrintArray2(const std::array<int, 5> &arr)
{
    for (unsigned x = 0; x < arr.size(); x++)
    {
        std::cout << arr[x] << "\t";
    }
    std::cout << std::endl;
}
