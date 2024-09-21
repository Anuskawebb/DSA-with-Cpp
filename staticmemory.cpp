#include <iostream>

const int ARRAY_SIZE = 5; 

int main() {
    // Static memory allocation using an array
    int staticArray[ARRAY_SIZE];

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        staticArray[i] = i * 2;
    }

    
    std::cout << "Values in the staticArray: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << staticArray[i] << " ";
    }

    return 0;
}

