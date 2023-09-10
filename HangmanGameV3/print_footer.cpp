#include <iostream>
#include "won.hpp"
#include "add_word.hpp"
#include "print_footer.hpp"


void print_footer(std::string secret_word, std::map<char, bool> right_guesses)
{
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║      END OF THE GAME     ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
    std::cout << std::endl;
    if (won(secret_word, right_guesses))
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
