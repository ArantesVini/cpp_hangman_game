#include "right_guess.hpp"


bool right_guess(char guess, const std::string& secret_word)
{
    for (char letter : secret_word)
    {
        if (guess == letter)
            return true;
    }
    return false;
}
