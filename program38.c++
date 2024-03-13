#include <iostream>
#include <string>

using namespace std;

// Base class
class Bird {
protected:
    string species;
    int age;

public:
    Bird(string _species, int _age) : species(_species), age(_age) {}

    void fly() {
        cout << "A " << species << " is flying." << endl;
    }

    void chirp() {
        cout << "A " << species << " is chirping." << endl;
    }

    virtual void display() {
        cout << "Species: " << species << ", Age: " << age << endl;
    }
};

// Derived class
class Sparrow : public Bird {
public:
    Sparrow(int _age) : Bird("Sparrow", _age) {}

    // Overriding display() method of base class
    void display() override {
        cout << "Sparrow: ";
        Bird::display(); // Calling base class method
    }
};

int main() {
    // Creating objectsf
    Bird genericBird("Unknown", 5);
    Sparrow sparrow(2);

    // Calling methods
    genericBird.fly();
    genericBird.chirp();
    genericBird.display();

    cout << endl;

    sparrow.fly();
    sparrow.chirp();
    sparrow.display();

    return 0;
}
