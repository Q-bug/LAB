/* 
Variant 1

Report:
List the services provided to the specified client in the specified time range (from ... to ...)

Parameters:
Full name of the client, start date of the range, date of the end of the range
*/

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{

    // path to current folder
    // (TESTED ON LINUX, may not work for Win)
    //std::string path = "/home/killmilk/Documents/Visual Studio/nothacking/bestindividualkataganrog/";
    std::string path = std::filesystem::current_path();
    path += '/';
    std::cout << path << "\n";

    std::string name;
    std::string t1;
    std::string t2;
    std::string buff;
    std::string buff2;

    // input
    std::cout << "Type name:\n";
    std::getline(std::cin, name); // familia+imya+otchestvo
    std::cout << "Type start date (dd.mm.yyyy):\n";
    std::getline(std::cin, t1);
    std::cout << "Type finish date (dd.mm.yyyy):\n";
    std::getline(std::cin, t2);

    // uncomment this for tests
    //name = "Petrov Ivan Vasilievich";
    //t1 = "13.02.2008"; // 13.02.2008 included
    //t1 = "14.02.2008"; // 13.02.2008 excluded
    //t2 = "28.11.2012"; // 28.11.2012 included
    //t2 = "27.11.2012"; // 28.11.2012 excluded

    // genious date separation
    buff = "";
    buff += t1[0];
    buff += t1[1];
    int d1 = std::stoi(buff);
    buff = "";
    buff += t1[3];
    buff += t1[4];
    int m1 = std::stoi(buff);
    buff = "";
    buff += t1[6];
    buff += t1[7];
    buff += t1[8];
    buff += t1[9];
    int y1 = std::stoi(buff);
    buff = "";
    buff += t2[0];
    buff += t2[1];
    int d2 = std::stoi(buff);
    buff = "";
    buff += t2[3];
    buff += t2[4];
    int m2 = std::stoi(buff);
    buff = "";
    buff += t2[6];
    buff += t2[7];
    buff += t2[8];
    buff += t2[9];
    int y2 = std::stoi(buff);
    int d3;
    int m3;
    int y3;

    // find phone number by name
    std::string line;
    std::string phone = "";
    std::ifstream client(path + "client.txt");
    if (client.is_open())
    {
        while (getline(client, line))
        {
            if (phone != "")
            {
                break;
            }
            buff = "";
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] != ',')
                {
                    buff += line[i];
                }
                else
                {
                    if (buff != name)
                    {
                        break;
                    }
                    else
                    {
                        i += 2;
                        for (; i < line.length(); i++)
                        {
                            if (line[i] != ',')
                            {
                                phone += line[i];
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    client.close();

    // find logs by phone
    std::string log = "";
    int field;
    std::ifstream logs(path + "logs.txt");
    if (logs.is_open())
    {
        while (getline(logs, line))
        {
            buff = "";
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] != ',')
                {
                    buff += line[i];
                }
                else
                {
                    if (buff != phone)
                    {
                        break;
                    }
                    else
                    {
                        i += 2;
                        buff = "";
                        buff2 = "";
                        for (; i < line.length(); i++)
                        {
                            if (line[i] != ',' || buff != "")
                            {
                                // std::cout << line[i] << "";
                                buff2 += line[i];
                            }
                            // check if time is in range
                            else
                            {
                                buff = "";
                                buff += line[i + 2];
                                buff += line[i + 3];
                                d3 = std::stoi(buff);
                                buff = "";
                                buff += line[i + 5];
                                buff += line[i + 6];
                                m3 = std::stoi(buff);
                                buff = "";
                                buff += line[i + 8];
                                buff += line[i + 9];
                                buff += line[i + 10];
                                buff += line[i + 11];
                                y3 = std::stoi(buff);
                                if (y3 < y1 || y3 > y2 || y3 == y1 && (m3 < m1 || m3 == m1 && d3 < d1) || y3 == y2 && (m3 > m2 || m3 == m2 && d3 > d2))
                                {
                                    buff2 = "";
                                    break;
                                }
                            }
                        }
                        if (buff2 != "")
                        {
                            log += buff2 + "\n";
                        }
                    }
                }
            }
        }
    }

    if (log == "")
    {
        log = "No data";
    }

    // writing log to file
    std::ofstream out(path + "report.txt");
    out << log;
    out.close();

    std::cout << "End of program" << std::endl;
    return 0;
}