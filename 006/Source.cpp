#include <iostream>

void doNothing(const int& x) // Don't worry about what &x is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

/*
Using uninitialized variables is one of the most common mistakes that novice programmers make, and unfortunately, 
it can also be one of the most challenging to debug (because the program may run fine anyway if 
the uninitialized value happened to get assigned to a spot of memory that had a reasonable value in it, like 0).
*/

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make compiler think we're using this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x;

    /*
    Code implementing undefined behavior may exhibit any of the following symptoms:

        Your program produces different results every time it is run.
        Your program consistently produces the same incorrect result.
        Your program behaves inconsistently (sometimes produces the correct result, sometimes not).
        Your program seems like its working but produces incorrect results later in the program.
        Your program crashes, either immediately or later.
        Your program works on some compilers but not others.
        Your program works until you change some other seemingly unrelated code.
    */

    return 0;
}