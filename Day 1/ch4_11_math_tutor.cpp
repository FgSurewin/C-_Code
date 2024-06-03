// Chapter 4, Programming Challenge 11: Math Tutor
#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const int MIN = 50;
    const int MAX = 450;

    // Variable to hold the answer.
    int answer;

    // Create a random number engine.
    random_device engine;

    // Create a random number distribution object.
    uniform_int_distribution<int> randomInt(MIN, MAX);

    // Generate two random numbers.
    int num1 = randomInt(engine);
    int num2 = randomInt(engine);

    // Display the addition problem.
    cout << setw(5) << num1 << endl
         << "+" << setw(4) << num2 << endl
         << "-----\n\n";

    // Wait for the user to press the Enter key.
    cout << "Enter to the answer here: ";
    cin >> answer;

    // Calculate the sum.
    int correctAnswer = num1 + num2;

    // Display the answer to the addition problem.
    if (answer == correctAnswer)
        cout << "Congratulations! ";
    else
        cout << "Sorry, that is incorrect. ";

    cout << "The answer is " << correctAnswer << endl;
    return 0;
}