#include <iostream>

class Shape {
public:
    // Function to calculate the area of a rectangle
    double area(double length, double width) {
        return length * width;
    }

    // Function to calculate the area of a circle
    double area(double radius) {
        return 3.14 * radius * radius;
    }

    // Function to calculate the area of a triangle
    double area(double base, double height, char type) {
        if (type == 'e') {  // equilateral triangle
            return 0.5 * base * height;
        } else if (type == 'r') {  // right-angled triangle
            return 0.5 * base * height;
        } else {
            std::cerr << "Invalid triangle type." << std::endl;
            return 0.0;
        }
    }
};

int main() {
    Shape shape;

    // Rectangle
    double rectangleArea = shape.area(5.0, 8.0);
    std::cout << "Area of rectangle: " << rectangleArea << std::endl;

    // Circle
    double circleArea = shape.area(4.0);
    std::cout << "Area of circle: " << circleArea << std::endl;

    // Equilateral Triangle
    double equilateralTriangleArea = shape.area(6.0, 6.0, 'e');
    std::cout << "Area of equilateral triangle: " << equilateralTriangleArea << std::endl;

    // Right-Angled Triangle
    double rightAngledTriangleArea = shape.area(3.0, 4.0, 'r');
    std::cout << "Area of right-angled triangle: " << rightAngledTriangleArea << std::endl;

    return 0;
}
