// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // Floating type numbers have decimal places
    cout << "Min float " << numeric_limits<float>::min() << endl;
    cout << "Max float " << numeric_limits<float>::max() << endl;
    cout << "Min double " << numeric_limits<double>::min() << endl;
    cout << "Max double " << numeric_limits<double>::max() << endl;
    cout << "Min long double " << numeric_limits<long double>::min() << endl;
    cout << "Max long double " << numeric_limits<long double>::max() << endl;

    // The float is accurate to 6 digits
    float f1 = 1.1111111;
    float f2 = 1.1111111;

    // Printf allows you to print with formatting
    // Here I say I want to print 7 decimals
    printf("Sum = %.7f\n", (f1 + f2));

    // Doubles have 15 digits of precision
    double d1 = 1.1111111111111111;
    double d2 = 1.1111111111111111;
    printf("Sum 2 = %.16f\n", (d1 + d2));
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
