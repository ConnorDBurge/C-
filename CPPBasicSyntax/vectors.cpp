#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    string sentence = "This is a random string";
    vector<string> sentenceVector;
    stringstream ss(sentence);
    string individual;
    char space = ' ';
    while (getline(ss, individual, space))
    {
        sentenceVector.push_back(individual);
    }

    for (int i = 0; i < sentenceVector.size(); i++)
    {
        cout << sentenceVector[i] << endl;
    }

    return 0;
}