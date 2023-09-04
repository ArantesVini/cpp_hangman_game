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

bool won()
{
    for (char letter : SECRET_WORD)
    {
        if (!right_guesses[letter])
        {
            return false;
        }
    }
    return true;
}

bool hanged()
{
    return wrong_guesses.size() >= 5;
}

void print_header()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║      Welcome to the      ║" << endl;
    cout << "║       Hangman game       ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
}

void print_footer()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║      END OF THE GAME     ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
    cout << endl;
    if (won())
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         YOU WON!         ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
    else
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         YOU LOST!        ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
    cout << endl;
    cout << "The word was: " << SECRET_WORD << endl;
    cout << endl;
}

void print_wrong_guesses()
{
    if (wrong_guesses.size() > 0)
    {
        cout << "Wrong guesses: ";
        for (char letter : wrong_guesses)
        {
            cout << letter << " ";
        }
        cout << endl;
    }
}

void print_word_with_guesses()
{
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
}

int main()
{

    print_header();

    while (hanged() == false && won() == false)
    {
        cout << endl;

        print_wrong_guesses();

        print_word_with_guesses();

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
    print_footer();
}
