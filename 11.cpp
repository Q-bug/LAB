// Write a C/C++ program which summarize elements at the same indexes of the two arrays a[] and b[]. the result will be stored in the 3rd array. c[0] = a[0] + b[0] and etc..

#include <iostream>

int main()
{
    int size;
    std::cout << "Size of arrays:" << std::endl;
    std::cin >> size;
    int *a = new int[size];
    int *b = new int[size];
    int *c = new int[size];
    std::cout << "Elements of a:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " = ";
        std::cin >> a[i];
    }
    std::cout << "Elements of b:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " = ";
        std::cin >> b[i];
    }
    std::cout << "Sum of a and b:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
}