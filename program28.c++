#include <iostream>

using namespace std;

// Define a structure for Wall
struct Wall {
    double length;
    double height;

    // Member function to calculate the area of the wall
    double calculateArea() {
        return length * height;
    }
};

int main() {
    // Declare a wall object
    Wall myWall;

    // Input wall dimensions
    cout << "Enter the length of the wall: ";
    cin >> myWall.length;
    
    cout << "Enter the height of the wall: ";
    cin >> myWall.height;

    // Calculate and display the area using the member function
    double area = myWall.calculateArea();
    cout << "\nThe area of the wall is: " << area << " square units." << endl;

    return 0;
}
