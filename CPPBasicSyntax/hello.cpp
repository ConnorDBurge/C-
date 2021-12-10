#include <iostream>
#include <cmath>
using namespace std;

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
}