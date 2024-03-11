//Certainly! Here's an example of a C++ program that illustrates function overloading using two functions with the same name but different argument types (int and float):

#include <iostream>

// Function with int argument
void displayValue(int x) {
    std::cout << "Integer value: " << x << std::endl;
}

// Function with float argument
void displayValue(float y) {
    std::cout << "Float value: " << y << std::endl;
}

int main() {
    int intValue = 10;
    float floatValue = 3.14;

    // Call the function with int argument
    displayValue(intValue);

    // Call the function with float argument
    displayValue(floatValue);

    return 0;
}
