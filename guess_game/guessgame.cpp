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

    int secret_number = rand() % 100;

    int guess;
    cout << "╔══════════════════════════╗" << endl;
    cout << "║   Enter your guess:      ║" << endl;
    cout << "╚══════════════════════════╝" << endl;
    cin >> guess;
    cout << "Your guess is " << guess << endl;

    bool is_right = guess == secret_number;
    bool is_high = guess > secret_number;
    bool is_low = guess < secret_number;

    if (is_right)
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         You win!         ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
    else if (is_high)
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║        Too high!          ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
    else
    {
        cout << "╔══════════════════════════╗" << endl;
        cout << "║         Too low!          ║" << endl;
        cout << "╚══════════════════════════╝" << endl;
    }
}
