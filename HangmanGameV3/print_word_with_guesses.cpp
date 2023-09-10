#include <iostream>
#include <map>
#include <string>
#include "print_word_with_guesses.hpp"


void print_word_with_guesses(std::map<char, bool> right_guesses, std::string secret_word)
{
    for (char letter : secret_word)
    {
        if (right_guesses[letter])
        {
            std::cout << letter << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
}
