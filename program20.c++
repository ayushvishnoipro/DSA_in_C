#include <iostream>

using namespace std;

class NumberSwapper {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize the numbers
    NumberSwapper(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Member function to swap the numbers
    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Member function to display the swapped numbers
    void displayNumbers() {
        cout << "After swapping, num1 = " << num1 << " and num2 = " << num2 << endl;
    }
};

int main() {
    // Input two numbers
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Create an object of the NumberSwapper class
    NumberSwapper numberSwapper(num1, num2);

    // Display original numbers
    cout << "Before swapping, num1 = " << num1 << " and num2 = " << num2 << endl;

    // Swap numbers using the member function
    numberSwapper.swapNumbers();

    // Display swapped numbers
    numberSwapper.displayNumbers();

    return 0;
}
