#include <string>

extern std::string secret_word;

bool right_guess(char guess)
{
    for (char letter : secret_word)
    {
        if (guess == letter)
            return true;
    }
    return false;
}