#include <iostream>

int main()
{
    std::cout << "Hi!";
    std::cout << "My name is Alex.";

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
    std::cout << "My name is Alex." << std::endl;

    int x{};
    std::cout << "Enter a integer:";
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "x is equal to: " << x << '\n'; // Using '\n' standalone

    std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)

    return 0;
}
/*
std::cin and std::cout always go on the left-hand side of the statement.

std::cout is used to output a value (cout = character output)

std::cin is used to get an input value (cin = character input)

<< is used with std::cout, and shows the direction that data is moving (if std::cout represents the console, the output data is moving from the variable to the console). std::cout << 4 moves the value of 4 to the console

>> is used with std::cin, and shows the direction that data is moving (if std::cin represents the keyboard, the input data is moving from the keyboard to the variable). std::cin >> x moves the value the user entered from the keyboard into x
*/