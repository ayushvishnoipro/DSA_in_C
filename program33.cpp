#include <iostream>
using namespace std;
// Forward declaration of ClassA
class ClassA;

class ClassB
{
public:
    // Friend function declaration
    friend void accessPrivateMember(const ClassA &objA);

    void displayFromClassB(const ClassA &objA)
    {
        // Accessing the private member of ClassA through the friend function
        std::cout << "Value of privateMember in ClassA accessed from ClassB: " << objA.privateMember << std::endl;
    }
};

class ClassA
{
private:
    int privateMember;

public:
    // Constructor
    ClassA(int value) : privateMember(value) {}

    // Friend function definition
    friend void accessPrivateMember(const ClassA &objA);

    // Member function to display private member
    void displayFromClassA()
    {
        std::cout << "Value of privateMember in ClassA: " << privateMember << std::endl;
    }
};

// Friend function definition
void accessPrivateMember(const ClassA &objA)
{
    // Accessing the private member of ClassA
    std::cout << "Value of privateMember in ClassA accessed from friend function: " << objA.privateMember << std::endl;
}

int main()
{
    // Creating objects of ClassA and ClassB
    ClassA objA(42);
    ClassB objB;

    // Accessing private member of ClassA using friend function from ClassB
    objB.displayFromClassB(objA);

    // Accessing private member of ClassA using friend function
    accessPrivateMember(objA);

    // Displaying private member of ClassA using member function
    objA.displayFromClassA();

    return 0;
}
