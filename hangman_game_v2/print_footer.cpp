#include <iostream>
#include <won.hpp>
#include <add_word.hpp>
#include <string>

std::string secret_word;

void print_footer()
{
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║      END OF THE GAME     ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
    std::cout << std::endl;
    if (won())
    {
        std::cout << "╔══════════════════════════╗" << std::endl;
        std::cout << "║         YOU WON!         ║" << std::endl;
        std::cout << "╚══════════════════════════╝" << std::endl;

        std::cout << "Do you like to add a new word to the game? (Y/N)" << std::endl;
        add_word();
    }
    else
    {
        std::cout << "╔══════════════════════════╗" << std::endl;
        std::cout << "║         YOU LOST!        ║" << std::endl;
        std::cout << "╚══════════════════════════╝" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "The word was: " << secret_word << std::endl;
    std::cout << std::endl;
}