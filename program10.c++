// Certainly! Here's a C++ program that uses a function without arguments but with a return value to find the sum of the first 10 natural numbers:

#include <iostream>

// Function to calculate the sum of first 10 natural numbers
int calculateSum() {
    int n = 10;
    return n * (n + 1) / 2;
}

int main() {
    // Calculate the sum of the first 10 natural numbers
    int sum = calculateSum();

    // Display the result
    std::cout << "The sum of the first 10 natural numbers is: " << sum << std::endl;

    return 0;
}
