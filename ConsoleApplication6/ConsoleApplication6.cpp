// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // ---------- CONDITIONALS ----------
    // Conditional Operators : > < >= <= == !=
    // Logical Operators : && || !

    string sAge;
    cout << "Enter your Age : ";
    cin >> sAge;
    int nAge = stoi(sAge);

    // Used to output whether a birthday is important
    if ((nAge >= 1) && (nAge <= 18)) {
        cout << "Important Birthday" << endl;
    }
    else if ((nAge == 21) || (nAge == 50)) {
        cout << "Important Birthday" << endl;
    }
    else if (nAge >= 65) {
        cout << "Important Birthday" << endl;
    }
    else {
        cout << "Not an Important Birthday" << endl;
    }

    // A ternary operator works like a compact if else
    // statement. If the condition is true the first
    // value is stored and otherwise the second
    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    // Shows bool values as true or false
    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote : " << canIVote << endl;
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
