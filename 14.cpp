// Write a program that selects words with an odd number of letters in the text entered from the keyboard and displays the result on the screen.

#include <iostream>
#include <string.h>

int main()
{
    std::string str = "";
    std::string tmp = "";
    std::string out = "";
    std::cout << "YOUR TEXT:" << std::endl;
    getline(std::cin, str);
    // std::cout << str.length()%2 << std::endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            if (tmp.length() % 2 == 1)
            {
                out += tmp + " ";
            }
            tmp = "";
        }
        else
        {
            tmp += str[i];
        }
    }
    out.pop_back();
    std::cout << out << std::endl;
}