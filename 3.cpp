// A natural number n is given. Evaluate 2 in power of n without using already implemented functions

#include <iostream>

int main()
{
    int x;
    std::cout << "2 in a power of ";
    std::cin >> x;
    int y = 1;
    for (int i = 0; i < x; i++)
    {
        y *= 2;
    }
    std::cout << y << std::endl;
}