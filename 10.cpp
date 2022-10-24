// Write a C/C++ program which find an average value of the array elements. The array Length is N.

#include <iostream>

int main()
{
    std::cout << "Size of array:" << std::endl;
    int x;
    double y = 0;
    std::cin >> x;
    double *array = new double[x];
    for (int i = 0; i < x; i++)
    {
        std::cout << i << " = ";
        std::cin >> array[i];
        y += array[i];
    }
    std::cout << y/x << std::endl;
}