#include <iostream>
#include <string>

using namespace std;

// Base class
class Shape {
protected:
    string shapeType;

public:
    Shape(string _shapeType) : shapeType(_shapeType) {}

    void draw() {
        cout << "Drawing a " << shapeType << "." << endl;
    }

    virtual void display() {
        cout << "Shape: " << shapeType << endl;
    }
};

// Another base class
class Color {
protected:
    string colorName;

public:
    Color(string _colorName) : colorName(_colorName) {}

    void fill() {
        cout << "Filling with " << colorName << " color." << endl;
    }

    virtual void display() {
        cout << "Color: " << colorName << endl;
    }
};

// Derived class inheriting from both Shape and Color
class ColoredShape : public Shape, public Color {
public:
    ColoredShape(string _shapeType, string _colorName) : Shape(_shapeType), Color(_colorName) {}

    // Overriding display() method of Shape
    void display() override {
        cout << "Colored Shape: ";
        Shape::display(); // Calling display() method of Shape
        Color::display(); // Calling display() method of Color
    }
};

int main() {
    // Creating an object of derived class
    ColoredShape cs("Square", "Red");

    // Calling methods
    cs.draw(); // Calls draw() method of Shape
    cs.fill(); // Calls fill() method of Color
    cs.display(); // Calls display() method of ColoredShape

    return 0;
}
