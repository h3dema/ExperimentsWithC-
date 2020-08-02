// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ---------- VECTORS ----------
    // Vectors are used when you don't know 
    // how big the array should be
    vector<int> vNums(2);

    // Add values
    vNums[0] = 1;
    vNums[1] = 2;

    // Add another to the end
    vNums.push_back(3);

    // Get vector size
    cout << "Vector Size : " << vNums.size() << endl;
}
