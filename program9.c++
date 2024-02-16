// write a c++ program using functions with arguments with return value to find out sum of first 10 natural numbers
#include <iostream>

// Function to calculate the sum of first n natural numbers
int calculateSum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    // Calculate the sum of the first 10 natural numbers
    int n = 10;
    int sum = calculateSum(n);

    // Display the result
    std::cout << "The sum of the first 10 natural numbers is: " << sum << std::endl;

    return 0;
}
