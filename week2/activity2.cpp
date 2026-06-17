#include <iostream>
#include <string>

int main()
{
    // Dynamically allocate memory for a string
    std::string* name = new std::string();

    // Get user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, *name);

    // Print the value
    std::cout << "Hello, " << *name << "!" << std::endl;

    // Deallocate memory
    delete name;
    // Prevents a dangling pointer after deletion.
    name = nullptr;

    return 0;
}
