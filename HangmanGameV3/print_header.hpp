// Inline functions must be in the header file only
#include <iostream>


inline void print_header()
{
    std::cout << "╔══════════════════════════╗" << std::endl;
    std::cout << "║      Welcome to the      ║" << std::endl;
    std::cout << "║       Hangman game       ║" << std::endl;
    std::cout << "╚══════════════════════════╝" << std::endl;
}
