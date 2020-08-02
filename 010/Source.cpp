#include <iostream>

/*
    In common language, unsigned integer wrap around is often incorrectly called “overflow” since the cause is identical to signed integer overflow.

    Many developers (and some large development houses, such as Google) believe that developers should generally avoid unsigned integers. This is largely because of two behaviors that can cause problems.
    First, consider the subtraction of two unsigned numbers, such as 3 and 5. 3 minus 5 is -2, but -2 can’t be represented as an unsigned number.
    Second, unexpected behavior can result when you mix signed and unsigned integers. In the above example, even if one of the operands (x or y) is signed, the other operand (the unsigned one) will cause the signed one to be promoted to an unsigned integer, and the same behavior will result!
*/
int main()
{
    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';


	unsigned int z{ 3 };
	unsigned int y{ 5 };

	std::cout << z - y << '\n';
	return 0;
}