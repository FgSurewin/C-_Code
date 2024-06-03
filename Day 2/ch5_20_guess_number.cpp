// Chapter 5, Programming Challenge 20: Random Number Guessing Game
#include <iostream>
#include <random>
using namespace std;

int main()
{
    int guess; // To hold the user's guess

    // Create a random number engine.
    random_device engine;

    // Create a distribution object.
    uniform_int_distribution<int> randomInt(1, 100);

    // Generate a random number. To keep things
    // reasonable, we will keep it within the
    // range of 1 through 100.
    int number = randomInt(engine);

    // Get the user's guess.
    cout << "I'm thinking of a number. Can you\n";
    cout << "guess what it is? ";
    cin >> guess;

    // Respond to the user's guess.
    while (guess != number)
    {
        if (guess < number)
        {
            cout << "No, that's too low.\n";
        }
        else if (guess > number)
        {
            cout << "Sorry, that's too high.\n";
        }

        // Get another guess.
        cout << "Guess again: ";
        cin >> guess;
    }

    // Congratulate the user.
    cout << "Congratulations! You guessed it!\n";
    cout << "I was thinking of the number "
         << number << ".\n";

    return 0;
}