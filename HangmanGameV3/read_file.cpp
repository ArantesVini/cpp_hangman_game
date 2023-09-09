#include <iostream>
#include <vector>
#include <fstream>

extern std::vector<std::string>
read_file()
{
    std::ifstream file;
    file.open("words.txt");

    if (file.is_open() == false)
    {
        std::cout << "Sorry, the game is unavailable right now :(" << std::endl;
        exit(0);
    }

    int words_quantity;
    file >> words_quantity;

    std::vector<std::string> words;

    for (int i = 0; i < words_quantity; i++)
    {
        std::string word;
        file >> word;
        words.push_back(word);
    }
    file.close();
    return words;
}
