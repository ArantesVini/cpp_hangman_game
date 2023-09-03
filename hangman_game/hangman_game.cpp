#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const string SECRET_WORD = "MELANCIA";

bool right_guess(char guess)
{
    for (char letter : SECRET_WORD)
    {
        if (guess == letter)
            return true;
        else
            return false;
    }
    return false;
}

int main()
{

    cout << SECRET_WORD << endl;

    bool hanged = false;
    bool won = false;

    while (hanged == false && won == false)
    {
        char guess;

        cin >> guess;
        guess = toupper(guess);
        if (right_guess(guess))
        {
            cout << "You got it right!" << endl;
        }
        else
        {
            cout << "You got it wrong!" << endl;
        }
    }
}