#include <vector>
#include <string>
#include <read_file.hpp>

std::string secret_word;

void sort_word()
{

    std::vector<std::string> words = read_file();
    srand(time(NULL));
    int random = rand() % words.size();

    secret_word = words[random];
}