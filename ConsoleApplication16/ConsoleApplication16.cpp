// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


// ----- FUNCTION PROTOTYPES -----
// You define the return type and data types for functions
// using a function prototype so main knows what is to be expected
// from this function
double AddNumbers(double num1, double num2);

void AssignName();

void AssignAge(int age);

int AssignAge2(int age);



int main()
{
    // ---------- FUNCTIONS ----------
    // You define function prototypes outside of main
    // so main knows a functions basic settings
    // Functions are also created outside of main
    // and can be found after main below

    // Call a function that sums values
    printf("%.1f + %.1f = %.1f\n", 5.0,
        4.0, AddNumbers(5, 4));

    // The function AssignName below creates a
    // variable called name, but variables created
    // in functions are not available outside of
    // that function

    // Variable values changed in a function don't
    // change that variables value outside of the
    // function
    int age2 = 43;
    AssignAge(age2);
    cout << "New Age : " << age2 << endl;

    // You could change the value by passing it back
    age2 = AssignAge2(age2);
    cout << "New Age " << age2 << "\n";
}


// ---------- FUNCTION DEFINITIONS ----------

double AddNumbers(double num1 = 0, double num2 = 0) {
    return num1 + num2;
}

// A variable created inside a function can't be accessed
// outside of it
void AssignName() {
    string name = "Derek";
}

void AssignAge(int age) {
    age = 24;
}

int AssignAge2(int age) {
    age = 24;
    return age;
}