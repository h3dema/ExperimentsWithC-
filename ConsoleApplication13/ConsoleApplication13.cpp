// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // ---------- STRINGS ----------
    // A C++ string is a series of characters that
    // can be changed
    string str1 = "I'm a string";

    // Get the 1st character
    cout << "1st : " << str1[0] << endl;

    // Get the last character
    cout << "Last : " << str1.back() << endl;

    // Get the string length
    cout << "Length : " << str1.length() << endl;

    // Copy a string to another
    string str2 = str1;

    // Copy a string after the 1st 4 characters
    string str3(str2, 4);

    // Combine strings
    string str4 = str1 + " and your not";

    // Append to the end of a string
    str4.append("!");

    // Erase characters from a string from 1 index
    // to another
    str4.erase(12, str4.length() - 1);
    cout << "New String : " << str4 << endl;

    // find() returns index where pattern is found
    // or npos (End of String)
    if (str4.find("string") != string::npos)
        cout << "String Index : " <<
        str4.find("string") << endl;

    // substr(x, y) returns a substring starting at
    // index x with a length of y
    cout << "Substring : " <<
        str4.substr(6, 6) << endl;

    // Convert int to string
    string strNum = to_string(1 + 2);
    cout << "I'm a String : " << strNum << "\n";
}
