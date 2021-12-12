#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

void solution(vector<string> args)
{
    float op1 = stof(args[0]);
    float op2 = stof(args[2]);

    if (args[1] == "+")
        printf("%.1f + %.1f = %.1f\n", op1, op2, op1 + op2);
    else if (args[1] == "-")
        printf("%.1f - %.1f = %.1f\n", op1, op2, op1 - op2);
    else if (args[1] == "*")
        printf("%.1f * %.1f = %.1f\n", op1, op2, op1 * op2);
    else if (args[1] == "/")
        printf("%.1f / %.1f = %.1f\n", op1, op2, op1 / op2);
    else
        cout << "Please enter only +, -, *, /\n";
}

int main()
{
    string problem;
    cout << "Enter calculation (ex. 5 + 6): ";
    getline(std::cin, problem);

    vector<string> problemChars;
    stringstream ss(problem);
    string indv;
    char space = ' ';
    while (getline(ss, indv, space))
    {
        problemChars.push_back(indv);
    }

    solution(problemChars);
}