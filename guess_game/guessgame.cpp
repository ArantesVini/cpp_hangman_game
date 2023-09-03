#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "╔══════════════════════════╗" << endl;
    cout << "║   Welcome to the Guess   ║" << endl;
    cout << "║           game           ║" << endl;
    cout << "╚══════════════════════════╝" << endl;

    srand(static_cast<unsigned int>(time(nullptr)));

    const int SECRET_NUMBER = rand() % 100;

    int guess;
    bool keep_playing = true;
    int try_count = 0;

    double score = 1000.0;

    while (keep_playing)
    {
        try_count++;

        if (cin.fail()) // check if input is not an integer
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
            keep_playing = false;
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
    cout.precision(3);
    cout << fixed;
    cout << "║ Your score is " << score << " points. ║" << endl;
}
