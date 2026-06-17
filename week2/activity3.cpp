#include <iostream>

int main()
{
    int size;

    // Get array size from user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Get values from user
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter value for element [" << i << "]: ";
        std::cin >> arr[i];
    }

    // Print the array elements
    std::cout << "\nArray elements:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Deallocate memory
    delete[] arr;
    arr = nullptr;

    return 0;
}
