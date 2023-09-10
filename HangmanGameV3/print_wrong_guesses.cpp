#include <iostream>
#include "print_wrong_guesses.hpp"

void print_wrong_guesses(std::vector<char>& wrong_guesses)
{
    if (wrong_guesses.size() > 0)
    {
        std::cout << "Wrong guesses: ";
        for (char letter : wrong_guesses)
        {
            std::cout << letter << " ";
        }
        std::cout << std::endl;
    }
}
