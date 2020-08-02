#include <iostream>

using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix
/*
    Avoid using directives (such as using namespace std;) at the top of your program. 
    They violate the reason why namespaces were added in the first place.
 */


/*
    when the compiler is compiling main.cpp, it will know what identifier add is and be satisfied. 
    The linker will connect the function call to add in main.cpp to the definition of function add in add.cpp.

    Using this method, we can give files access to functions that live in another file.
 */
int add(int x, int y); // needed so main.cpp knows that add() is a function declared elsewhere

/*
    Do not #include “add.cpp” from main.cpp. This will cause the compiler to insert the contents of add.cpp directly 
    into main.cpp instead of treating them as separate files. While it may compile and run for this simple example, 
    you will encounter problems down the road using this method.
 */

int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}