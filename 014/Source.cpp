#include <iostream>

int main()
{
    int x{ 5 };
    int y = x++; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << '\n'; // show 6, and increment to 7
    std::cout << ++x << '\n'; // increment then show 8

    // that's strange. 
    // look what the first x shows
    std::cout << x << ' ' << x++ << ' ' << ++x << ' ' << x  << '\n'; 
    /*
    Warning:
    C++ does not define the order of evaluation for function arguments or operator operands.

    
    Best practice
    Don’t use a variable that has a side effect applied to it more than once in a given statement. If you do, the result may be undefined.
    */
    return 0;
}