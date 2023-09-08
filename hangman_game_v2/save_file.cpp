#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void save_file(std::vector<std::string> words)
{
    std::ofstream file;
    file.open("words.txt");

    if (file.is_open() == false)
    {
        std::cout << "Sorry, the game is unavailable right now :(" << std::endl;
        exit(0);
    }
    file << words.size();
    file << std::endl;
    for (std::string word : words)
    {
        file << word << std::endl;
    }
    file.close();
}
