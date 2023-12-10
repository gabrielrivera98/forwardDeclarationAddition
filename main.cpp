#include <iostream>

// Forward declaration of simple addition function
int addIntegers(int x, int y);

int main()
{
    std::cout << addIntegers(5, 4);
    return 0;
}

// Function defined here
int addIntegers(int x, int y)
{
    return x + y;
}