#include <iostream>

using namespace std;

int main()
{

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;

    while (true)
    {
        if (guessCount == guessLimit)
        {
            cout << "Guess limit reached" << endl;
            break;
        }

        guessCount++;
        cout << "Enter guess: ";
        cin >> guess;

        if (guess == secretNum)
        {
            cout << "You guessed correctly" << endl;
            break;
        }
    }

    return 0;
}