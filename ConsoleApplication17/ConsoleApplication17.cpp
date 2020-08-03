// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int age2 = 20;

    // ---------- POINTERS ----------
    // A Pointer stores a address in memory
    // You declare a pointer to be of the same type as the data
    // type to which it points
    // If you are storing the address of an int then the
    // pointer is an int
    // When you declare a pointer give it a null value
    int* pAge2 = NULL;

    // The reference operator returns the address for a
    // variable that can be stored in a pointer
    pAge2 = &age2;

    // Print the address Hexidecimal Number
    cout << "Address : " << pAge2 << "\n";

    // Get the value at that address with the dereference
    // operator
    cout << "Value at Address : " << *pAge2 << "\n";

    // We can create a pointer to an array and cycle
    // through the data with ++ and --
    int intArray[] = { 1,2,3,4 };
    int* pIntArray = intArray;

    cout << "1st " << *pIntArray <<
        " Address " << pIntArray << "\n";
    pIntArray++;
    cout << "2nd " << *pIntArray <<
        " Address " << pIntArray << "\n";
    pIntArray--;
    cout << "1st " << *pIntArray <<
        " Address " << pIntArray << "\n";
}

