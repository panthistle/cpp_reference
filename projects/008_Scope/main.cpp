// c++ example: Scope

#include <iostream>
#include <cstdlib> // c standard library [srand, rand]
#include <ctime>   // c time library [time]

/*  global scope variable (accessible from anywhere in the current file and
    from other code files which include this file)  */
int range = 6;
/*  static scope variable (accessible from anywhere in the current file but not
    from other code files which include this file)  */
static int throws = 5;

namespace test_one
{
    // block variable - qualified access outside this scope:  test_one::dig
    char dig = 69;
}

namespace test_two
{
    // block variable - qualified access outside this scope:  test_two::dig
    char dig = 'e';
}

namespace random_throw
{
    // block function - qualified access outside this scope:  random_throw::hand
    void hand(int range, int throws)
    {
        std::cout << "----- new hand -----" << std::endl;
        srand(unsigned(time(0)));
        /*  the scope resolution operator '::' may be used to access the value
            of the static/global variable 'throws' rather than function parameter  */
        for (int x = 1; x <= ::throws; x++)
        {
            int num = 1 + (rand() % range);
            std::cout << num << std::endl;
        }
    }
}

int main()
{
    // implicit access, using whole namespace
    using namespace random_throw;
    // function 'hand' does not need qualifier
    hand(7, 3);

    // explicit access, using full qualifier
    std::cout << "byte A: " << test_one::dig << std::endl;

    // implicit access, using namespace variable
    using test_two::dig;
    // dig does not need qualifier
    std::cout << "byte B: " << dig << std::endl;

    return 0;
}
