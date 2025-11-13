#include <iostream>
#include <string>

// Main function demonstrating basic input/output - UPDATED!
// This program asks for user name and prints greeting - CHANGED!
int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0; // Program executed successfully
}