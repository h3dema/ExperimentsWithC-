// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
// Includes functions used to read and write data
#include <iostream>

// State that we can to use the standard namespace which means
// we don't have to type cout to output information, but
// can instead use cout
using namespace std;

int main()
{
    // Outputs the string Hello World to the screen followed by a newline
    // cout is your console or screen
    // << : Stream insertion operator which puts the string
    // into the cout stream to display it
    // endl issues a newline and forces a write to the console
    cout << "Hello World" << endl;

    // Variable names can contain letters, numbers, underscores
    // but not math operators, spaces and can't start with a number

    // ---------- DATA TYPES ----------
    // Data types define how much memory to set aside
    // for data we want to store

    // Booleans can have a value of true (1), or false (0)
    bool married = true;

    // Chars store 256 single characters represented by
    // keys on your keyboard
    char myGrade = 'A';

    // There are many integer types with different min
    // and max values
    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min short int " << numeric_limits<short int>::min() << endl;
    cout << "Max short int " << numeric_limits<short int>::max() << endl;
    cout << "Min int " << numeric_limits<int>::min() << endl;
    cout << "Max int " << numeric_limits<int>::max() << endl;
    cout << "Min long " << numeric_limits<long>::min() << endl;
    cout << "Max long " << numeric_limits<long>::max() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
