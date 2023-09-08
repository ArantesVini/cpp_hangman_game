#include <string>
#include <map>

std::string secret_word;
std::map<char, bool> right_guesses;

bool won()
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