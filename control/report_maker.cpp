/*
Kontrolnaya
*/

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{

    // path to current folder
    std::string path = std::filesystem::current_path();
    path += '/';
    std::cout << path << "\n";

    // saving data from vedomost
    std::string line;
    std::string buff;
    std::string a[20][6];
    int x = 0;
    int y;
    std::ifstream vedomost(path + "vedomost.txt");
    if (vedomost.is_open())
    {
        while (getline(vedomost, line))
        {
            y = 0;
            buff = "";
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] != ',')
                {
                    buff += line[i];
                }
                else
                {
                    a[x][y] = buff;
                    buff = "";
                    i += 1;
                    y += 1;
                }
            }
            a[x][y] = buff;
            x += 1;
        }
    }
    vedomost.close();

    // lists generator
    std::string s = "";  // all
    std::string s1 = ""; // 5
    std::string s2 = ""; // 5>4
    std::string s3 = ""; // 5<4
    std::string s4 = ""; // 2
    int five;
    int four;
    int loh;
    for (int i = 0; i < 20; i++)
    {
        five = 0;
        four = 0;
        loh = 0;
        if (a[i][0] == "")
        {
            continue;
        }
        for (int j = 1; j < 6; j++)
        {
            if (a[i][j] == "5")
            {
                five += 1;
            }
            else if (a[i][j] == "4")
            {
                four += 1;
            }
            else if (a[i][j] == "2")
            {
                loh += 1;
            }
        }
        s += a[i][0];
        s += "\n";
        if (five == 5)
        {
            s1 += a[i][0];
            s1 += "\n";
        }
        else if (five + four == 5)
        {
            if (five > four)
            {
                s2 += a[i][0];
                s2 += "\n";
            }
            else
            {
                s3 += a[i][0];
                s3 += "\n";
            }
        }
        else if (loh != 0)
        {
            s4 += a[i][0];
            s4 += "\n";
        }
    }
    std::ofstream out(path + "1_all_students.txt");
    out << s;
    out.close();
    std::ofstream out2(path + "2_otlichniki.txt");
    out2 << s1;
    out2.close();
    std::ofstream out3(path + "3_five_more.txt");
    out3 << s2;
    out3.close();
    std::ofstream out4(path + "4_four_more.txt");
    out4 << s3;
    out4.close();
    std::ofstream out5(path + "5_have_tvo.txt");
    out5 << s4;
    out5.close();

    std::cout << "End of program" << std::endl;
    return 0;
}