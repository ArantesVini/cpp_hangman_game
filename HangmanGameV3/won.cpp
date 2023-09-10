#include <map>
#include <string>
#include "won.hpp"


bool won(std::string secret_word, std::map<char, bool> right_guesses)
{
    for (char letter : secret_word)
    {
        if (!right_guesses[letter])
        {
            return false;
        }
    }
    return true;
}
