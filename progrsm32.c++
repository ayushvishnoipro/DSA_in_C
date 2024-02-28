

// Certainly! Below is an example C++ program that demonstrates the friend function concept using a Box class with a private data member length. The friend function is used to access the private member and return its value:

#include <iostream>

class Box {
private:
    double length;

public:
    // Constructor
    Box(double len) : length(len) {}

    // Friend function declaration
    friend double getLength(const Box& box);
};

// Friend function definition
double getLength(const Box& box) {
    // Accessing the private member length of the Box class
    return box.length;
}

int main() {
    // Creating an object of the Box class
    Box myBox(5.0);

    // Using the friend function to get the length of the box
    double boxLength = getLength(myBox);

    // Displaying the length
    std::cout << "Length of the box: " << boxLength << std::endl;

    return 0;
}
