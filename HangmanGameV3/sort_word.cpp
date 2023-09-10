#include <vector>
#include <string>
#include "read_file.hpp"
#include "sort_word.hpp"

std::string sort_word()
{

    std::vector<std::string> words = read_file();
    srand((unsigned)time(NULL));
    int random = rand() % words.size();

    return words[random];
}
