#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

double AddNumbers(double num1, double num2);
void AssignAge(int age);
void AssignAge3(int *pAge);
void DoubleArray(int *arr, int size);

int main()
{
    // std::vector<int> myVec(10);
    // std::iota(std::begin(myVec), std::end(myVec), 0);

    // for (int i = 0; i < myVec.size(); i++)
    // {
    //     std::cout << myVec[i] << " ";
    // }
    // std::cout << std::endl;

    // for (int y : myVec)
    // {
    //     if (y % 2 == 0)
    //     {
    //         std::cout << y << std::endl;
    //     }
    // }

    // double num1, num2;
    // std::cout << "Enter Num 1: ";
    // std::cin >> num1;
    // std::cout << "Enter Num 2: ";
    // std::cin >> num2;
    // printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1, num2));

    // Pointers
    int age = 43;
    int *pAge = &age;
    std::cout << pAge << std::endl;  // prints address
    std::cout << *pAge << std::endl; // prints value at address

    // Pointers for Arrays
    int intArray[] = {1, 2, 3, 4};
    int *pIntArray = intArray; // no & symbol required
    std::cout << "1st " << *pIntArray << " Address " << pIntArray << std::endl;
    pIntArray++;
    std::cout << "2nd " << *pIntArray << " Address " << pIntArray << std::endl;
    pIntArray++;
    std::cout << "3rd " << *pIntArray << " Address " << pIntArray << std::endl;
    pIntArray++;
    std::cout << "4th " << *pIntArray << " Address " << pIntArray << std::endl;

    // Passing pointers to functions
    int age3 = 43;
    AssignAge3(&age3);
    std::cout << "Pointe Age: " << age3 << std::endl;

    DoubleArray(intArray, 4);
    for (int i = 0; i < 4; i++)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

double AddNumbers(double num1, double num2)
{
    return num1 + num2;
}

void AssignAge(int age)
{
    age = 24;
}

void AssignAge3(int *pAge)
{
    *pAge = 22;
}

void DoubleArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}