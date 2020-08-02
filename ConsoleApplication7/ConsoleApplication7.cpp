// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // ---------- ARRAYS ----------
    // An array is a collection of data of the same type
    // Declare an array of ints with the value of 1
    // Once the size is defined it can't change
    int arrnNums[10] = { 1 };

    // Leave out the array length
    int arrnNums2[] = { 1,2,3 };

    // Create an array and assign some values
    int arrnNums3[5] = { 8, 9 };

    // Access array values using indexes starting with 0
    cout << "1st Value : " << arrnNums3[0] << endl;

    // Change a value
    arrnNums3[0] = 7;
    cout << "1st Value : " << arrnNums3[0] << endl;
}
