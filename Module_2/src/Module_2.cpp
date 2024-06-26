#include <iostream>
#include <string>

#define INPUT_RETRIEVAL_COUNT 3

std::string getHandledInput(std::string prompt)
{
    std::string input = "";
    std::cout << prompt << std::endl;
    std::getline(std::cin, input);

    if (input.empty())
    {
        std::cout << "Empty input! Try again." << std::endl;
        return getHandledInput(prompt);
    }
    return input;
}

int main()
{
    std::cout << "Welcome to a simple input taking program!" << std::endl;
    std::cout << "In this program you'll have to input 2 string 3 times." << std::endl;
    std::cout << "At the end of each cycle you'll be presented with the sum of the two input." << std::endl;

    std::string inputOne;
    std::string inputTwo;
    std::string result;
    for (size_t i = 0; i < INPUT_RETRIEVAL_COUNT; i++)
    {
        inputOne = getHandledInput("First Input - Please input a string.");
        inputTwo = getHandledInput("Second Input - Please input a string.");
        result = inputOne + inputTwo;
        std::cout << "The concatenated string of " << inputOne << " and " << inputTwo << " is " << result << std::endl;
    }

    return 0;
}
