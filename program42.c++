#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string _brand) : brand(_brand) {}

    void drive() {
        cout << "Driving the " << brand << " vehicle." << endl;
    }

    virtual void display() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class
class Car : public Vehicle {
protected:
    int seats;

public:
    Car(string _brand, int _seats) : Vehicle(_brand), seats(_seats) {}

    void honk() {
        cout << "Honking the horn of the " << brand << " car." << endl;
    }

    // Overriding display() method of base class
    void display() override {
        cout << "Car: ";
        Vehicle::display(); // Calling base class method
        cout << "Number of seats: " << seats << endl;
    }
};

// Subderived class
class SportsCar : public Car {
private:
    bool turbo;

public:
    SportsCar(string _brand, int _seats, bool _turbo) : Car(_brand, _seats), turbo(_turbo) {}

    void accelerate() {
        if (turbo)
            cout << "Accelerating with turbo in the " << brand << " sports car." << endl;
        else
            cout << "Accelerating in the " << brand << " sports car." << endl;
    }

    // Overriding display() method of base class
    void display() override {
        cout << "Sports Car: ";
        Car::display(); // Calling base class method
        cout << "Turbocharged: " << (turbo ? "Yes" : "No") << endl;
    }
};

int main() {
    // Creating objects
    Vehicle vehicle("Generic");
    Car car("Toyota", 4);
    SportsCar sportsCar("Ferrari", 2, true);

    // Calling methods
    vehicle.drive();
    vehicle.display();

    cout << endl;

    car.drive();
    car.honk();
    car.display();

    cout << endl;

    sportsCar.drive();
    sportsCar.honk();
    sportsCar.accelerate();
    sportsCar.display();

    return 0;
}
