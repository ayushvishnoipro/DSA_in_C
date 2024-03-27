// Ayush Vishnoi
// 22BCE10577
// B11+B12+B13
#include <iostream>

#include <iostream>
#include <string>

class Student {
private:
std::string name;
int age;
double gpa;

public:
// Constructors
Student() : name(""), age(0), gpa(0.0) {}
Student(std::string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}

// Function to display student information
void display() {
std::cout << "Name: " << name << std::endl;
std::cout << "Age: " << age << std::endl;
std::cout << "GPA: " << gpa << std::endl;
}

// Function to update student information (overloaded)
void update(std::string newName) {
name = newName;
}

void update(int newAge) {
age = newAge;
}

void update(double newGpa) {
gpa = newGpa;
}
};

int main() {
// Creating a student object
Student student("Alice", 20, 3.5);

// Displaying initial student information
std::cout << "Initial Student Information:" << std::endl;
student.display();
std::cout << std::endl;

// Updating student information
student.update("Bob");
student.update(21);
student.update(3.8);

// Displaying updated student information
std::cout << "Updated Student Information:" << std::endl;
student.display();

return 0;
}

