#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the name
    char name[] = "John";

    // Declare a pointer to char to store the address of the name variable
    char *namePtr = name;

    // Display the value and address of the name variable using the pointer
    cout << "Name: " << name << endl;
    cout << "Address of the name variable: " << static_cast<void*>(namePtr) << endl;

    return 0;
}
