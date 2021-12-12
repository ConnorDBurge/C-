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
    double investment = 0.0, interest = 0.0;
    std::cout << "How much to invest: ";
    std::cin >> investment;
    std::cout << "Interest Rate: ";
    std::cin >> interest;
    interest /= 100; // convert to percent

    for (int i = 0; i < Range(1, 10, 1).size(); i++)
    {
        investment += (investment * interest);
    }
    std::cout << "Value after 10 years: " << investment << std::endl;

    return 0;
}