#include <iostream>

// Inline function to calculate (x + y)^3
inline int cubeSum(int x, int y) {
    return (x + y) * (x + y) * (x + y);
}

int main() {
    int x, y;
    
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    // Calculate the result using the inline function
    int result = cubeSum(x, y);

    // Print the result
    std::cout << "(x + y)^3 = " << result << std::endl;

    return 0;
}