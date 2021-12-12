#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int min, int max, int step)
{
    std::vector<int> range;
    for (int i = min; i <= max; i += step)
        range.push_back(i); // {} not needed for single lines
    return range;
}

int main()
{
    std::vector<int> range = Range(0, 10, 2); // {0, 2, 4, 6, 8, 10}
    for (int i = 0; i < range.size(); i++)
    {
        std::cout << range[i] << " ";
    }
    std::cout << std::endl;
}
