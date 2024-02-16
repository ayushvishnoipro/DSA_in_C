// Certainly! Here's an example of a C++ program that uses a function without arguments but without a return value to find the factorial of a given number:

#include <iostream>

// Function to calculate the factorial of a given number
void calculateFactorial() {
    int number;
    
    // Input from the user
    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> number;

    // Calculate factorial
    int factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Display the result
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
}

int main() {
    // Call the function to calculate factorial
    calculateFactorial();

    return 0;
}
