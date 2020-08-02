/*
	The answer is that angled brackets are used to tell the preprocessor that we are including a header file that was included with the compiler, so it should look for that header file in the system directories. The double-quotes tell the preprocessor that this is a user-defined header file we are supplying, so it should look for that header file in the current directory containing our source code first. If it doesn’t find the header file there, it will check any other include paths that you’ve specified as part of your compiler/IDE settings. That failing, it will fall back to checking the system directories.

    When C++ was first created, all of the files in the standard runtime library ended in a .h suffix. Life was consistent, and it was good. The original version of cout and cin were declared in iostream.h. When the language was standardized by the ANSI committee, they decided to move all of the functionality in the standard library into the std namespace to help avoid naming conflicts with user-defined identifiers. However, this presented a problem: if they moved all the functionality into the std namespace, none of the old programs (that included iostream.h) would work anymore!

    To work around this issue, a new set of header files was introduced that use the same names but lack the .h extension. These new header files have all their functionality inside the std namespace. This way, older programs that include #include <iostream.h> do not need to be rewritten, and newer programs can #include <iostream>.
*/

#include <iostream>
#include "add.h"  // Insert contents of add.h at this point.  Note use of double quotes here.
 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}