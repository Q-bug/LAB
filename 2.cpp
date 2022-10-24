// You are given real numbers x and y. Write a C++ program that finds the maximum of them

#include <iostream>

int main()
{
    double x, y;
    std::cout << "Num 1: ";
    std::cin >> x;
    std::cout << "Num 2: ";
    std::cin >> y;
    if (x > y)
    {
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << y << std::endl;
    }
}