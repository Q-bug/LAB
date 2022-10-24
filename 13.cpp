// Write a program that calculates the product of all negative array elements. The array and its length are entered by the user.

#include <iostream>

int main()
{
    int prod = 1;
    int size;
    bool nonegative = true;
    std::cout << "Size of arrays:" << std::endl;
    std::cin >> size;
    int *a = new int[size];
    std::cout << "Elements of a:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " = ";
        std::cin >> a[i];
        if (a[i] < 0)
        {
            prod *= a[i];
            nonegative = false;
        }
    }
    if (nonegative)
    {
        std::cout << "No negative" << std::endl;
    }
    else
    {
        std::cout << "Prodct of all negative: " << prod << std::endl;
    }
}