// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // ---------- ARRAYS ----------
    // An array is a collection of data of the same type

    // A multidimensional array is like a spreadsheet
    // If you think of each as layers that contain columns
    // 1st Number : Which layer
    // 2nd Number : Which column
    // 3rd Number : Which row
    int arrnNums4[2][2][2] = { {{1,2}, {3,4}}, 
                               {{5,6}, {7,8}} };

    cout << arrnNums4[0][1][1] << endl;
}
