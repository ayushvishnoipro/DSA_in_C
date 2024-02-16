
// Certainly! Here's a C++ program that uses a pointer to display the variable and its address:

#include <iostream>

int main() {
    // Declare a variable
    int myNumber = 42;

    // Declare a pointer and assign the address of the variable
    int* p = &myNumber;

    // Display the variable and its address using the pointer
    std::cout << "Variable value: " << *p << std::endl;
    std::cout << "Variable address: " << p << std::endl;

    return 0;
}
