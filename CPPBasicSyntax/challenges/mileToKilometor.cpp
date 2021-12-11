#include <iostream>
#include <sstream>
#include <vector>

int main()
{
    std::string miles;
    std::cout << "Enter Miles: ";
    getline(std::cin, miles);
    double nMiles = std::stod(miles);
    printf("%.1f miles equals %.4f kilometers\n", nMiles, nMiles * 1.60934);
}