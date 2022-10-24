/*The practical part must be taken from #14, supplementing it with some conditions:
• the input data is a file;
• work results are written to another file;
• input data is not limited to one line.*/

#include <iostream>
#include <string.h>
#include <fstream>

int main()
{
    std::string str = "";
    std::string tmp = "";
    std::string out = "";
    std::string folder = "/home/user/Documents/Visual Studio/";
    std::string filein = "15_input.txt";
    std::string fileout = "15_output.txt";
    std::ofstream file(folder + fileout); //clean text_output.txt
    file.close();
    std::ifstream file1(folder + filein);
    std::ofstream file2(folder + fileout, std::ios::app);
    while (getline(file1, str))
    {
        out = "";
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
        file2 << out;
    }

    file1.close();
    file2.close();
    return 0;
}
