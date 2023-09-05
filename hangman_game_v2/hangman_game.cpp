#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
#include <fstream>
#include <cstdlib>

using namespace std;

string secret_word = "WATERMELON";

map<char, bool> right_guesses;
vector<char> wrong_guesses;

bool right_guess(char guess)
{
    for (char letter : secret_word)
    {
        if (guess == letter)
            return true;
    }
    return false;
}

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

bool hanged()
{
    return wrong_guesses.size() >= 5;
}

void print_header()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║      Welcome to the      ║" << endl;
    cout << "║       Hangman game       ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
}

vector<string>
read_file()
{
    ifstream file;
    file.open("words.txt");

    if (file.is_open() == false)
    {
        cout << "Sorry, the game is unavailable right now :(" << endl;
        exit(0);
    }

    int words_quantity;
    file >> words_quantity;

    vector<string> words;

    for (int i = 0; i < words_quantity; i++)
    {
        string word;
        file >> word;
        words.push_back(word);
    }
    file.close();
    return words;
}

void save_file(vector<string> words)
{
    ofstream file;
    file.open("words.txt");

    if (file.is_open() == false)
    {
        cout << "Sorry, the game is unavailable right now :(" << endl;
        exit(0);
    }
    file << words.size();
    file << endl;
    for (string word : words)
    {
        file << word << endl;
    }
    file.close();
}

void add_word()
{
    char response;
    cin >> response;
    response = toupper(response);

    if (response == 'N')
    {
        return;
    }

    cout << "Type the new word: ";
    string new_word;
    cin >> new_word;

    transform(new_word.begin(), new_word.end(), new_word.begin(), ::toupper);

    vector<string> words = read_file();
    words.push_back(new_word);
    save_file(words);
}

void print_footer()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║      END OF THE GAME     ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
    cout << endl;
    if (won())
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         YOU WON!         ║" << endl;
        cout << "╚══════════════════════════╝" << endl;

        cout << "Do you like to add a new word to the game? (Y/N)" << endl;
        add_word();
    }
    else
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         YOU LOST!        ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
    cout << endl;
    cout << "The word was: " << secret_word << endl;
    cout << endl;
}

void print_wrong_guesses()
{
    if (wrong_guesses.size() > 0)
    {
        cout << "Wrong guesses: ";
        for (char letter : wrong_guesses)
        {
            cout << letter << " ";
        }
        cout << endl;
    }
}

void print_word_with_guesses()
{
    for (char letter : secret_word)
    {
        if (right_guesses[letter])
        {
            cout << letter << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
}

void sort_word()
{

    vector<string> words = read_file();
    srand(time(NULL));
    int random = rand() % words.size();

    secret_word = words[random];
}

int main()
{

    print_header();

    sort_word();

    while (hanged() == false && won() == false)
    {
        cout << endl;

        print_wrong_guesses();

        print_word_with_guesses();

        cout << endl;

        char guess;
        cout << "Type your guess: ";
        cin >> guess;
        guess = toupper(guess);

        right_guesses[guess] = true;

        if (right_guess(guess))
        {
        }
        else
        {
            wrong_guesses.push_back(guess);
        }
        cout << endl;
    }
    print_footer();
}
