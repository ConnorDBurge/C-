#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum = 0; // global variable
const double PI = 3.14159;

int main(int argc, char **argv)
{

    if (argc != 1)
    {
        std::cout << "You entered " << argc << " arguments\n"
                  << std::endl;
    }
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }

    unsigned short int u16Age = 43;
    short int u32Age = 180;
    int nDays = 7;
    long int lBig = 11000000;
    float fPi = 3.14159;
    double dbFloat = 1.11111111111111111111;
    long double ldPi = 3.14159999999;

    std::cout << "Min bool " << std::numeric_limits<bool>::min() << std::endl;
    std::cout << "Max bool " << std::numeric_limits<bool>::max() << std::endl;

    return 0;
}