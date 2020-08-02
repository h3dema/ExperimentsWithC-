#include <iostream>

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x; // who knows what we'll get, because x is uninitialized

    /*
    In this case, the computer will assign some unused memory to x. It will then send the value residing in that memory location to 
    std::cout, which will print the value (interpreted as an integer). But what value will it print? The answer is “who knows!”, 
    and the answer may (or may not) change every time you run the program. When the author ran this program in Visual Studio, 
    std::cout printed the value 7177728 one time, and 5277592 the next. Feel free to compile and run the program yourself 
    (your computer won’t explode).

    Most modern compilers will attempt to detect if a variable is being used without being given a value. 
    If they are able to detect this, they will generally issue a compile-time error.
    */

    return 0;
}