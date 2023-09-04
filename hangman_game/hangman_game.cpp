#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
using namespace std;

const string SECRET_WORD = "WATERMELON";

map<char, bool> right_guesses;
vector<char> wrong_guesses;

bool right_guess(char guess)
{
    for (char letter : SECRET_WORD)
    {
        if (guess == letter)
            return true;
    }
    return false;
}

int main()
{

    cout << "╔══════════════════════════╗" << endl;
    cout << "║      Welcome to the      ║" << endl;
    cout << "║       Hangman game       ║" << endl;
    cout << "╚══════════════════════════╝" << endl;

    bool hanged = false;
    bool won = false;

    while (hanged == false && won == false)
    {
        cout << endl;

        if (wrong_guesses.size() > 0)
        {
            cout << "Wrong guesses: ";
            for (char letter : wrong_guesses)
            {
                cout << letter << " ";
            }
            cout << endl;
        }

        for (char letter : SECRET_WORD)
        {
            if (right_guesses[letter])
            {
                cout << letter << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;

        char guess;
        cout << "Type your guess: ";
        cin >> guess;
        guess = toupper(guess);

        right_guesses[guess] = true;

        if (right_guess(guess))
        {
            cout << "You got it right!" << endl;
        }
        else
        {
            cout << "You got it wrong!" << endl;
            wrong_guesses.push_back(guess);
        }
        cout << endl;
    }
}
