//Certainly! Here's an example C++ program demonstrating the use of an array of objects with three student objects:


#include <iostream>
#include <string>

class Student {
public:
    // Member variables
    std::string name;
    int age;
    double grade;

    // Constructor
    Student(std::string n, int a, double g) : name(n), age(a), grade(g) {}

    // Member function to display student information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    // Creating an array of 3 student objects
    Student students[3] = {
        {"Alice", 20, 90.5},
        {"Bob", 22, 85.0},
        {"Charlie", 21, 78.3}
    };

    // Displaying information of each student
    for (int i = 0; i < 3; ++i) {
        std::cout << "Student " << (i + 1) << " Information:" << std::endl;
        students[i].display();
        std::cout << std::endl;
    }

    return 0;
}
