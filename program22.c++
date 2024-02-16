#include <iostream>
#include <cmath>

// Define a structure called Point
struct Point {
    double x;
    double y;
};

// Define a class called Circle
class Circle {
private:
    double radius;
    Point center;

public:
    // Constructor to initialize the circle
    Circle(double r, double centerX, double centerY) {
        radius = r;
        center.x = centerX;
        center.y = centerY;
    }

    // Member function to calculate the area of the circle
    double calculateArea() {
        return 3.14 * pow(radius, 2);
    }

    // Member function to display circle information
    void displayCircleInfo() {
        std::cout << "Circle Information:" << std::endl;
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Center: (" << center.x << ", " << center.y << ")" << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

int main() {
    // Create an object of the Point structure
    Point myPoint;
    myPoint.x = 3.0;
    myPoint.y = 4.0;

    // Display Point information
    std::cout << "Point Information:" << std::endl;
    std::cout << "X Coordinate: " << myPoint.x << std::endl;
    std::cout << "Y Coordinate: " << myPoint.y << std::endl;

    // Create an object of the Circle class
    Circle myCircle(5.0, 1.0, 2.0);

    // Display Circle information
    myCircle.displayCircleInfo();

    return 0;
}
