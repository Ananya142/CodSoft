#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    int guess = 0;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have picked a random number between 1 and 100. Try to guess it!" << endl;

    while (guess != random_number) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < random_number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > random_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Correct! The number was " << random_number << ". You guessed it right!" << endl;
        }
    }

    return 0;
}
