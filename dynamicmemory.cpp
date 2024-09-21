#include <iostream>

int main() {
    
    int *dynamicInt = new int;

    // Check if memory allocation was successful
    if (dynamicInt == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1; /
    }

    *dynamicInt = 42;

    
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;

    // Don't forget to free the allocated memory to avoid memory leaks
    delete dynamicInt;

    return 0;
}

