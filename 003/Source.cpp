#include <iostream>

int main()
{
	int width;
	width = 5; // copy assignment of value 5 into variable width
	// variable width now has value 5
	width = 7; // change value stored in variable width to 7
	// variable width now has value 7
	std::cout << width << std::endl;

	int depth(5); // direct initialization 
	std::cout << depth << std::endl;

	int height = { 6 }; // copy brace initialization 
	std::cout << height << std::endl;

	/* Best practice
		Favor direct brace initialization whenever possible.
	*/
	int other_height{ 6 }; // direct brace initialization 
	std::cout << other_height << std::endl;

	int x{}; // zero initialization
	x = { 2 };
	std::cout << x;

	return 0;
}