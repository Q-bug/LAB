// A natural number n is given. Calculate n! (n factorial)  without using already implemented functions

#include <iostream>

int main()
{
    int n;
    std::cout << "Factorial of ";
    std::cin >> n;
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    std::cout << f << std::endl;
}