#include <iostream>

int main()
{
    // 1. Allocate memory dynamically and assign a value
    int* myNumber = new int(16140);

    std::cout << "Value:   " << *myNumber << std::endl;
    std::cout << "Address: " << myNumber << std::endl;

    // 2. Deallocate the memory
    delete myNumber;
    myNumber = nullptr;

    // 3. Confirm that the pointer is null
    std::cout << myNumber;

    return 0;
}
