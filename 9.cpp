// Random numbers a, b, c are given. If there is a triangle with sides a, b, c, then determine which triangle it is: equilateral, isosceles or versatile. If the triangle does not exist, display an appropriate message.

#include <iostream>

int main()
{
    int x;
    int y;
    int z;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            std::cout << "EQUILATERAL" << std::endl;
        }
        else if (x == y || y == z || z==x){
            std::cout << "ISOSCELES" << std::endl;
        }
        else {
            std::cout << "VERSATILE" << std::endl;
        }
    }
    else
    {
        std::cout << "DOES NOT EXIST" << std::endl;
    }
}