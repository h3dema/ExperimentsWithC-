#include <iostream>
#include <bitset>

int main()
{
    int x{ 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    int bin{ 0b1011'0010 };  // assign binary 1011 0010 to the variable
    std::cout << std::hex << bin << '\n'; // print in hex
    std::cout << std::bitset<8>{bin} << '\n'; // notice the include <bitset> above
    
    long value{ 2'132'673'462 }; // much easier to read than 2132673462
    std::cout << std::dec << value << '\n'; // return to decimal



    return 0;
}