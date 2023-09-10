#include <iostream>
#include <iterator>
#include "print_wrong_guesses.hpp"

void print_wrong_guesses(const std::array<char, 5>& wrong_guesses)
{
    std::cout << "Wrong guesses: ";
    for (char letter : wrong_guesses)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}
