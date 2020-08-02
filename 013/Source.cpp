#include <iostream>
#include <cstdint> // for std::int_fast64_t

// note: exp must be non-negative
std::int_fast64_t powint(int base, int exp)
{
	/*
		                         i
	*/

	std::int_fast64_t result{ 1 };
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}

int main()
{
	std::cout << powint(7, 1) << '\n';
	std::cout << powint(7, 2) << '\n';
	std::cout << powint(7, 3) << '\n';
	std::cout << powint(7, 4) << '\n';
	std::cout << powint(7, 5) << '\n';

	return 0;
}