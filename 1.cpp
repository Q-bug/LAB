// The legs of a right-angled triangle are given. Write a C++ program that find its hypotenuse and area.

#include <iostream>
#include <math.h>

int main()
{
    int a, b;
    std::cout << "Leg 1: ";
    std::cin >> a;
    std::cout << "Leg 2: ";
    std::cin >> b;
    std::cout << "Hypotenuse: " << sqrt(a * a + b * b) << std::endl;
    std::cout << "Area: " << a * b / 2 << std::endl;
}