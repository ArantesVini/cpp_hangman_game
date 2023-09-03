#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║   Welcome to the Guess   ║" << endl;
    cout << "║           game           ║" << endl;
    cout << "╚══════════════════════════╝" << endl;

    char difficulty;

    while (true)
    {
        cout << "Choose your difficulty level:" << endl;
        cout << "[ E ] Easy" << endl;
        cout << "[ M ] Medium" << endl;
        cout << "[ H ] Hard" << endl;

        cin >> difficulty;

        difficulty = toupper(difficulty);

        if (difficulty == 'E' || difficulty == 'M' || difficulty == 'H')
        {
            break;
        }

        cout << "Invalid difficulty level. Please choose one of the options." << endl;
    }

    int max_tries;

    switch (difficulty)
    {
    case 'E':
        max_tries = 15;
        break;
    case 'M':
        max_tries = 10;
        break;
    case 'H':
        max_tries = 5;
        break;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    const int SECRET_NUMBER = rand() % 100;

    int guess;
    bool keep_playing = true;
    int try_count = 0;

    double score = 1000.0;

    bool win = false;

    for (try_count = 1; try_count <= max_tries; try_count++)
    {
        if (cin.fail())
        {
            try_count--;
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Enter your guess: ";
        cin >> guess;

        double points_lost = abs(guess - SECRET_NUMBER) / 2.0;

        score -= points_lost;

        bool is_right = guess == SECRET_NUMBER;
        bool is_high = guess > SECRET_NUMBER;
        bool is_low = guess < SECRET_NUMBER;

        if (is_right)
        {
            cout << "╔══════════════════════════╗" << endl;
            cout << "║         You win!         ║" << endl;
            cout << "╚══════════════════════════╝" << endl;
            win = true;
            break;
        }
        else if (is_high)
        {
            cout << "║        Too high!         ║" << endl;
        }
        else
        {
            cout << "║         Too low!         ║" << endl;
        }
    }

    cout << "║ You tried " << try_count << " times. ║" << endl;

    if (win)
    {
        cout << "║ Your score is " << score << " points. ║" << endl;
    }
    else
    {
        cout << "║         You lose!         ║" << endl;
    }
}
