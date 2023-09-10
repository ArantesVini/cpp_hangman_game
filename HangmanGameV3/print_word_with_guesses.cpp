#include <iostream>
#include "print_word_with_guesses.hpp"


void print_word_with_guesses(const std::map<char, bool>& right_guesses, const std::string& secret_word)
{
    for (char letter : secret_word)
    {
        if (right_guesses.find(letter) == right_guesses.end())
        {
            std::cout << "_ ";
        }
        else
        {
            std::cout << letter << " ";
        }
    }
}
