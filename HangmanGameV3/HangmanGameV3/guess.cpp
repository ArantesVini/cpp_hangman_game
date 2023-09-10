#include <iostream>
#include "guess.hpp"
#include "right_guess.hpp"


void guess(std::map<char, bool>& right_guesses, std::vector<char>& wrong_guesses)
{
    std::cout << "Type your guess: ";
    char guess;
    std::cin >> guess;
    guess = toupper(guess);

    right_guesses[guess] = true;

    if (right_guess(guess))
    {
    }
    else
    {
        wrong_guesses.push_back(guess);
    }
    std::cout << std::endl;
}
