// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // We'll create a secret number guessing game

    // We need to seed the random number generator
    // time() returns the number of seconds
    // since 1, 1, 1970
    // Include <ctime>
    srand(time(NULL));

    // Generate a random number up to 10
    int secretNum = rand() % 11;
    int guess = 0;
    // Do while loops are guaranteed to execute at
    // least once
    do {
        cout << "Guess the Number : ";
        cin >> guess;
        if (guess > secretNum) cout << "To Big\n";
        if (guess < secretNum) cout << "To Small\n";
    } while (secretNum != guess);

    cout << "You guessed it" << endl;
}
