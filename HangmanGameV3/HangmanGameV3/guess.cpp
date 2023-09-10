#include <iostream>
#include <array>
#include <map>
#include <algorithm>
#include "guess.hpp"
#include "right_guess.hpp"

void guess(std::map<char, bool>& right_guesses, std::array<char, 5>& wrong_guesses, const std::string& secret_word)
{
    std::cout << "Type your guess: ";
    char guess;
    std::cin >> guess;
    guess = toupper(guess);

    right_guesses[guess] = true;

    bool already_guessed = false;
    for (int i = 0; i < wrong_guesses.size(); i++)
    {
        if (wrong_guesses[i] == guess)
        {
            already_guessed = true;
            break;
        }
    }

    if (!right_guess(guess, secret_word) && !already_guessed)
    {
        int index = 0;
        while (index < wrong_guesses.size() && wrong_guesses[index] != '\0')
        {
            index++;
        }
        if (index < wrong_guesses.size())
        {
            wrong_guesses[index] = guess;
        }
    }
    std::cout << std::endl;
}
