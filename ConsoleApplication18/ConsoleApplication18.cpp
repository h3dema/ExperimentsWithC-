// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// notice that you can create the prototype 
// without identifying the name of the parameters. 
// the type is enough
void AssignAge3(int*); 

int main()
{
    // You can pass a pointer to a function and then
    // the function can change that variables value
    // globally
    int age2 = 43;

    // Send the address for age to the function
    AssignAge3(&age2);

    cout << "Pointer Age " << age2 << "\n";
}

// Function that receives a pointer
void AssignAge3(int* pAge) {

    // Use dereference operator to change the value
    // at the address
    *pAge = 22;

}