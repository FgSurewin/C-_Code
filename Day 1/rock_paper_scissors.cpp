#include <iostream>
#include <random>

using namespace std;

int main()
{

    // Create a random number engine.
    random_device engine;

    // Create a random number distribution object. (It is inclusive on both sides)
    uniform_int_distribution<int> randomInt(0, 2);

    int botChoice = randomInt(engine);

    int humanChoice;
    cout << "Please enter your choice (Rock: 0, Paper: 1, and Scissors:2): ";
    cin >> humanChoice;

    cout << "Bot Choice: " << botChoice << endl;
    cout << "Human Choice: " << humanChoice << endl;

    if (botChoice == humanChoice)
    {
        cout << "This is a tie!" << endl;
    }
    else if ((humanChoice - botChoice) == 1 || (humanChoice == 0 && botChoice == 2))
    {
        cout << "Human wins!!" << endl;
    }
    else
    {
        cout << "Bot wins!!" << endl;
    }

    return 0;
}