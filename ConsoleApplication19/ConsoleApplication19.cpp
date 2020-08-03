// ConsoleApplication19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Double values in array passed
void DoubleArray(int* arr, int size);


int main()
{
    // Create an array and double values
    int arr[] = { 1,2,3,4 };
    DoubleArray(arr, 4);
    for (int i = 0; i < 4; ++i) {
        cout << "Array " << arr[i] << "\n";
    }
}

// Double values in array
void DoubleArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = arr[i] * 2;
    }
}