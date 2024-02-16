
// Certainly! Here's a C++ program that displays the reference of a variable through its address using the address operator (&):

#include <iostream>

int main() {
    // Declare a variable
    int myNumber = 42;

    // Display the address and reference of the variable
    std::cout << "Variable value: " << myNumber << std::endl;
    std::cout << "Variable address: " << &myNumber << std::endl;
    std::cout << "Variable reference: " << myNumber << " (via & operator)" << std::endl;

    return 0;
}