#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "print_header.hpp"
#include "sort_word.hpp"
#include "won.hpp"
#include "print_wrong_guesses.hpp"
#include "print_word_with_guesses.hpp"
#include "right_guess.hpp"
#include "print_footer.hpp"
#include "guess.hpp"

using namespace std;


int main()
{

    string secret_word;
    map<char, bool> right_guesses;
    vector<char> wrong_guesses;

    print_header();

    secret_word = sort_word();

    while (wrong_guesses.size() < 5 && won(secret_word, right_guesses) == false)
    {
        cout << endl;

        print_wrong_guesses(wrong_guesses);

        print_word_with_guesses(right_guesses, secret_word);

        cout << endl;

        guess(right_guesses, wrong_guesses, secret_word);
        
    }
    print_footer(secret_word, right_guesses);
}
