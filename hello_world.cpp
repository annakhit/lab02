#include <iostream>
#include <string>

// Main function demonstrating basic input/output
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;  // Program executed successfully
}