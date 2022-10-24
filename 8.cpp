// A square matrix of real numbers is given. Find the transposed matrix

#include <iostream>

int main()
{
    std::cout << "Size of matrix:" << std::endl;
    int x;
    int y;
    std::cout << "x = ";I
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    int **dinamic_array2 = new int *[x]; // Создаём массив
    for (int i = 0; i < x; i++)
    {
        dinamic_array2[i] = new int[y];
        for (int j = 0; j < y; j++)
        {
            std::cout << "[" << i << "][" << j << "] = ";
            std::cin >> dinamic_array2[i][j];
        }
    }
    std::cout << "Original matrix:" << std::endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "[" << dinamic_array2[i][j] << "] ";
        }
        std::cout << std::endl;
    }
    std::cout << "Transposed matrix:" << std::endl;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            std::cout << "[" << dinamic_array2[j][i] << "] ";
        }
        std::cout << std::endl;
    }
}