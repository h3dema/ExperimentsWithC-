// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // You can have the compiler assign the type
    auto whatAmI = true;

    // Get the number of bytes assigned to a type
    cout << "int Bytes : " << sizeof(int) << endl;

    // More about printf()
    // char, int, 5 space right justified int,
    // 3 decimal float / double, string specifiers
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

    // Create strings to store values
    string num1, num2;

    // Create a string
    string q1 = "Enter a Number : ";
    cout << q1;

    // Receive user input and store it
    cin >> num1;

    cout << "Enter Another Number : ";
    cin >> num2;

    cout << num1 + num2 << endl;  // Notice that the program shows a concatenation, because num1 and num2 are string

    // Convert strings into ints
    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2);

    cout << nNum1 + nNum2 << endl;  // What happens if you type an invalid number? exception: std::invalid_argument

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
