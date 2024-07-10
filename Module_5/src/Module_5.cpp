#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void appendToFile(std::string filePath, std::string data)
{
  std::ofstream file;
  file.open(filePath, std::ios::app); // open file and ensure append mode

  // check for file
  if (!file.is_open())
  {
    std::cerr << "Could not open the file " << filePath << std::endl;
    return;
  }

  file << data << std::endl; // append to file
  file.close();              // clean up

  // indication of operation success
  std::cout << "Added data to " << filePath << std::endl;
}

void createReversedFile(std::string originalFilePath, std::string newFilePath)
{
  // open files
  std::ifstream originalFile(originalFilePath);
  std::ofstream newFile(newFilePath);

  // check for file
  if (!originalFile.is_open())
  {
    std::cerr << "Could not open the file " << originalFilePath << std::endl;
    return;
  }

  // check for file
  if (!newFile.is_open())
  {
    std::cerr << "Could not create the file " << newFilePath << std::endl;
    return;
  }

  // write to file
  std::string fileContent;
  while (std::getline(originalFile, fileContent))
  {
    std::reverse(fileContent.begin(), fileContent.end());
    newFile << fileContent << std::endl;
  }

  // clean up
  originalFile.close();
  newFile.close();

  // indication of operation success
  std::cout << "Reversed " << originalFilePath << " to " << newFilePath << std::endl;
}

int main()
{
  const std::string originalFilePath = "CSC450_CT5_mod5.txt";
  const std::string reversedFilePath = "CSC450-mod5-reverse.txt";

  // get user input
  std::string userInput;
  std::cout << "Enter any new data you'd like to add to " << originalFilePath << std::endl;
  std::getline(std::cin, userInput);

  // append to file
  appendToFile(originalFilePath, userInput);

  // create reverse file
  createReversedFile(originalFilePath, reversedFilePath);

  return 0;
}
