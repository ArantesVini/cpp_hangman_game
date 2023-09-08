#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <print_header.cpp>
#include <sort_word.cpp>
#include <hanged.cpp>
#include <won.cpp>
#include <print_wrong_guesses.cpp>
#include <print_word_with_guesses.cpp>
#include <right_guess.cpp>
#include <print_footer.cpp>

using namespace std;

string secret_word;

map<char, bool> right_guesses;
vector<char> wrong_guesses;

int main()
{

    print_header();

    sort_word();

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
        }
        else
        {
            wrong_guesses.push_back(guess);
        }
        cout << endl;
    }
    print_footer();
}
