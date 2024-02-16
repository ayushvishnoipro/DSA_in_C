#include <iostream>

// Define a structure called Point
struct Point {
    int x;
    int y;
};

int main() {
    using namespace std;

    // Create an object of the Point structure
    Point myPoint;

    // Input x and y coordinates
    cout << "Enter x coordinate: ";
    cin >> myPoint.x;

    cout << "Enter y coordinate: ";
    cin >> myPoint.y;

    // Display the point
    cout << "The point is: (" << myPoint.x << ", " << myPoint.y << ")" << endl;

    return 0;
}
