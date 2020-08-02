#include <iostream>

int main()
{
    char ch{ 'a' };
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';

    long long v{ 1234567890123 };
    std::cout << static_cast<char>(v) << '\n';
    std::cout << static_cast<char16_t>(v) << '\n'; // weird behaviour
    std::cout << static_cast<char32_t>(v) << '\n'; // weird behaviour

    for (int i = 32; i < 3000; i++)
        std::cout << static_cast<char>(i);
    // Always put stand-alone chars in single quotes (e.g. ‘t’ or ‘\n’, not “t” or “\n”).
    // This helps the compiler optimize more effectively.
    std::cout << '\n';

    return 0;
}