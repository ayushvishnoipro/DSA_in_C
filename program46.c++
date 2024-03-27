#include <iostream>
using namespace std;

int main() {
    int age;

    try {
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0) {
            throw "Invalid age. Age cannot be negative.";
        } else if (age < 18) {
            throw "You are not eligible to vote. Minimum voting age is 18.";
        } else {
            cout << "Congratulations! You are eligible to vote." << endl;
        }
    }
    catch (const char* errorMessage) {
        cerr << "Error: " << errorMessage << endl;
    }

    return 0;
}
