// The coordinates (x1, y1) and (x2, y2) of two fields of the chessboard are given (as numbers from 1 to 8). Write a C++ programm, that determines whether the knight can move from one of these squares to another in one move.

#include <iostream>

int main()
{
    int x1, y1, x2, y2;
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    if (abs(x1 - x2) == 1 && abs(y1 - y2) == 2 || abs(x1 - x2) == 2 && abs(y1 - y2) == 1)
    {
        std::cout << "CAN MOVE\n";
    }
    else
    {
        std::cout << "NOPE\n";
    }
}