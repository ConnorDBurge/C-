#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

// Functions
void sayHi(string word); // defined below
int cube(int num);

void sayHi(string word)
{
    cout << word << endl;
}

int cube(int num)
{
    return num * num * num;
}

int power(int base, int pow)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    // Introduction
    string name = "Kyndall";
    int age = 26;
    cout << "Hello, " << name << endl;
    cout << name << " is " << age << endl;

    // Characters and Strings
    char grade = 'A';
    string phrase = "This is a string";
    cout << phrase << endl;

    // Integers, Floats, Boolean
    int integer = 2;
    double doubler = 2.2;
    bool boolean = false;
    cout << doubler << endl;

    // String functions
    cout << phrase.length() << endl;
    cout << phrase[3] << endl;
    phrase[0] = 'b';
    cout << phrase << endl;
    cout << phrase.find("string", 0) << endl;
    string phraseSub = phrase.substr(0, 5);
    cout << phraseSub << endl;

    // Number functions
    cout << 40 << endl;
    cout << 10 % 3 << endl;
    cout << integer + doubler << endl;
    cout << integer++ << endl;
    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    int otherNumbers[20]; // holds 20 elements
    cout
        << "numbers[0]: " << numbers[0] << endl;

    // Calling functions
    cout << "Enter your name: ";
    cin >> name; // declared above
    sayHi(name);
    cout << cube(2) << endl;

    // If statements
    if (true)
    {
        cout << true << endl;
    }
    else if (false)
    {
        cout << false << endl;
    }
    else
    {
        cout << "Never prints" << endl;
    }

    // Switch statements
    int variable = 3;
    switch (variable)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    default:
        cout << "Unknown" << endl;
    }

    // Loops
    for (int i = 0; i < 5; i++)
    {
        cout << i;
    }
    cout << endl;

    int nums[] = {0, 1, 2, 3, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numsSize; i++)
    {
        cout << nums[i];
    }
    cout << endl;

    cout << power(2, 3) << endl;

    // 2d arrays
    int twoDeeArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << twoDeeArray[i][j];
        }
        cout << endl;
    }

    // pointer variables
    // int agge = 19;
    // int *pAgge = &agge;

    // Vectors
    vector<int> vecNumbers;
    vecNumbers[0] = 10;
    vecNumbers[1] = 20;
    vecNumbers.push_back(30);
    cout << vecNumbers[vecNumbers.size() - 1] << endl;
    // Create a vector from string
    string sentence = "This is a random string";
    vector<string> sentenceVector;
    stringstream ss(sentence);
    string individual;
    char space = ' ';
    while (getline(ss, individual, space))
    {
        sentenceVector.push_back(individual);
    }
}