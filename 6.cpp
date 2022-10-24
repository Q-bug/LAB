// There is a brick with sides a, b, c and a rectangular hole in the wall with sides d, e. Write a C ++ program that determines if a brick will pass through a hole.

#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "d: ";
    std::cin >> d;
    std::cout << "e: ";
    std::cin >> e;
    if (a <= d && b <= e || b <= d && a <= e || a <= d && c <= e || c <= d && a <= e || b <= d && c <= e || c <= d && b <= e)
    {
        std::cout << "PASS\n";
    }
    else
    {
        std::cout << "NOPE\n";
    }
}