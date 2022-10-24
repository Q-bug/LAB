// Write a C/ C++ program to calculate the number of points with integer coordinates that fall within a circle of radius R centered at the origin. R > 0 is given.

#include <iostream>

int main()
{
    int r;
    int n = 0;
    std::cout << "Radius: ";
    std::cin >> r;
    for (int x = -r; x <= r; x++)
    {
        for (int y = -r; y <= r; y++)
        {
            if (x * x + y * y <= r * r)
            {
                // std::cout << x << " " << y << " In\n";
                n += 1;
            }
            // else std::cout << x << " " << y << " Out\n";
        }
    }
    std::cout << n << std::endl;
}