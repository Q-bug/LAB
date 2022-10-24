// Convert meters per second to miles per second and express in kilometers per minute.

#include <iostream>

int main()
{
    double mtps;
    double mlps;
    double kmpm;
    std::cout << "Meters per second: ";
    std::cin >> mtps;
    mlps = mtps * 0.00062;
    std::cout << "Miles per second: " << mlps << std::endl;
    kmpm = mlps / 0.00062 / 1000 * 60;
    std::cout << "Kilometers per minute: " << kmpm << std::endl;
}