// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // ---------- EXCEPTION HANDLING ----------
    // Exceptions are errors that occur when things don't
    // go as expected
    // You try to execute code that could be troublesome
    // and if an error occurs you catch it and throw
    // it to another block of code for handling

    double num3 = 10, num4 = 0;
    try {
        if (num4 == 0) {
            throw "Division by Zero Error";
        }
        else {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
        }
    }

    catch (const char* exp) {
        cout << "Error : " << exp << endl;
    }
}
