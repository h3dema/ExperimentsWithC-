// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream> // getline

using namespace std;

int main()
{
    // A stringstream object receives strings separated
    // by a space and then spits them out 1 by 1
    vector<string> words;
    stringstream ss("Some Random Words");
    string word;

    // A while loop will execute as long as there are
    // more words
    while (getline(ss, word, ' ')) {
        words.push_back(word);
    }

    // Cycle through each index in the vector using
    // a for loop
    for (int i = 0; i < words.size(); ++i) {
        cout << words[i] << endl;
    }

}

