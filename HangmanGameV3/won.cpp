#include <string>
#include <map>

extern std::string secret_word;
extern std::map<char, bool> right_guesses;

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