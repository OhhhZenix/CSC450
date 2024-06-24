#include <iostream>
#include <string>

int getIntegerInput(std::string prompt) {
  try {
    std::string input;
    std::cout << prompt << std::endl;
    std::getline(std::cin, input);
    return std::stoi(input);
  } catch (const std::exception &e) {
    std::cout << "Invalid input. Try again!" << std::endl;
    return getIntegerInput(prompt);
  }
}

int main() {
  // get input
  int numOne = getIntegerInput("Enter a number.");
  int numTwo = getIntegerInput("Enter a second number.");
  int numThree = getIntegerInput("Enter a third number.");

  // allocate mem and initialize
  int *ptrOne = new int(numOne);
  int *ptrTwo = new int(numTwo);
  int *ptrThree = new int(numThree);

  // display info
  std::cout << "Number One - Mem: " << ptrOne << " Value: " << *ptrOne
            << std::endl;
  std::cout << "Number Two - Mem: " << ptrTwo << " Value: " << *ptrTwo
            << std::endl;
  std::cout << "Number Three - Mem: " << ptrThree << " Value: " << *ptrThree
            << std::endl;

  // deallocate mem
  delete ptrOne;
  delete ptrTwo;
  delete ptrThree;

  return 0;
}
