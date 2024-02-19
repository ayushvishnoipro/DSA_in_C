#include <iostream>
#include <string>

using namespace std;

// Define a class for Car
class Car {
public:
    // Public member variables
    string brand;
    string model;
    int year;

    // Member function to display car information
    void displayCarInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar;

    // Input car information
    cout << "Enter car information:" << endl;
    cout << "Brand: ";
    getline(cin >> ws, myCar.brand);
    cout << "Model: ";
    getline(cin >> ws, myCar.model);
    cout << "Year: ";
    cin >> myCar.year;

    // Display car information using the object's member function
    cout << "\nCar Information:" << endl;
    myCar.displayCarInfo();

    return 0;
}
