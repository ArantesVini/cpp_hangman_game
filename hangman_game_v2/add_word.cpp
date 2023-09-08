#include <iostream>
#include <vector>
#include <string>
#include <read_file.cpp>
#include <save_file.cpp>

void add_word()
{
    char response;
    std::cin >> response;
    response = toupper(response);

    if (response == 'N')
    {
        return;
    }

    std::cout << "Type the new word: ";
    std::string new_word;
    std::cin >> new_word;

    transform(new_word.begin(), new_word.end(), new_word.begin(), ::toupper);

    std::vector<std::string> words = read_file();
    words.push_back(new_word);
    save_file(words);
}