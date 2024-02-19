#include <iostream>

using namespace std;

// Define a structure for complex numbers
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    // Declare two complex numbers
    Complex num1, num2, sum;

    // Input for the first complex number
    cout << "Enter real and imaginary parts of the first complex number:" << endl;
    cout << "Real part: ";
    cin >> num1.real;
    cout << "Imaginary part: ";
    cin >> num1.imag;

    // Input for the second complex number
    cout << "Enter real and imaginary parts of the second complex number:" << endl;
    cout << "Real part: ";
    cin >> num2.real;
    cout << "Imaginary part: ";
    cin >> num2.imag;

    // Add the complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
