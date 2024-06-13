#include <iostream>
#include <string>

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
    // Input
    std::string firstName = getHandledInput("Enter the first name of this fictional character.");
    std::string lastName = getHandledInput("Enter the last name of this fictional character.");
    std::string streetAddress = getHandledInput("Enter the street address of this fictional character.");
    std::string city = getHandledInput("Enter the city of this fictional character.");
    std::string zipCode = getHandledInput("Enter the zip code of this fictional character."); // zip codes are ordered numbers

    // Output
    std::cout << "The character's first name is " << firstName << std::endl;
    std::cout << "The character's last name is " << lastName << std::endl;
    std::cout << "The character's street address is " << streetAddress << std::endl;
    std::cout << "The character's city is " << city << std::endl;
    std::cout << "The character's zip code is " << zipCode << std::endl;

    return 0;
}
