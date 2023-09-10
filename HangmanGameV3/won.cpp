#include "won.hpp"


bool won(const std::string& secret_word, const std::map<char, bool>& right_guesses)
{
    for (char letter : secret_word)
    {
        if (right_guesses.find(letter) == right_guesses.end() || !right_guesses.at(letter))
        {
            return false;
        }
    }
    return true;
}
