// c++ example: Arrays

#include <iostream>
#include <array>

// Forward Declarations
void PrintArray(const int *arr, int length);
void PrintArray2(const std::array<int, 5> &arr);


int main()
{
    int numsA[5] = { 1, 8, 3, 15, 4 };  // c-type arrays
    int numsB[5];
    std::array<int, 5> numsC{};         // c++ array

    std::cout << "--- array numsA ---" << std::endl;
    PrintArray(numsA, 5);
    std::cout << "--- array numsB ---" << std::endl;
    PrintArray(numsB, 5);
    std::cout << "--- array numsC ---" << std::endl;
    PrintArray2(numsC);

    return 0;
}
