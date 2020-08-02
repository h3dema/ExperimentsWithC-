// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Character functions
    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number " << isalnum(letterZ) << endl;
    cout << "Is z a letter " << isalpha(letterZ) << endl;
    cout << "Is 3 a number " << isdigit(num5) << endl;
    cout << "Is space a space " << isspace(aSpace) << endl;
}
