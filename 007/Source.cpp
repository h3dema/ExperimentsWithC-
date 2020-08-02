#include <iostream>

/*
 This function has a return type of void, indicating that it does not return a value to the caller.
 Because it does not return a value, no return statement is needed (trying to return a specific
 value from a function with a void return type will result in a compilation error).
*/
void returnNothing()
// void means the function does not return a value to the caller
{
	std::cout << "Hi" << '\n';
	// This function does not return a value so no return statement is needed
}

int main()
{
	returnNothing(); // okay: function returnNothing() is called, no value is returned

	std::cout << returnNothing(); // error: this line will not compile.  You'll need to comment it out to continue.

	return 0;
}