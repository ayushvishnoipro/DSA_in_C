#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    Person(const string& n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Base class Employee
class Employee {
protected:
    double salary;
public:
    Employee(double s) : salary(s) {}

    void displaySalary() const {
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class Programmer
class Programmer : public Person, public Employee {
private:
    string programmingLanguage;
public:
    Programmer(const string& n, int a, double s, const string& pl)
        : Person(n, a), Employee(s), programmingLanguage(pl) {}

    void displayInfo() const {
        display();
        displaySalary();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main() {
    // Creating an object of the derived class Programmer
    Programmer p("John", 30, 60000, "C++");

    // Displaying the information of the programmer
    p.displayInfo();

    return 0;
}

