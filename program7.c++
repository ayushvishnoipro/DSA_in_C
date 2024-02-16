#include <iostream>
#include <stdexcept> // for std::runtime_error

using namespace std;

// Function to perform division with exception handling
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero is not allowed.");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    try {
        // Get numerator and denominator from the user
        int numerator, denominator;
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;

        // Perform division and handle exceptions
        double result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;

    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (...) {
        cerr << "An unknown error occurred." << endl;
    }

    return 0;
}
