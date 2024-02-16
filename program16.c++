#include <iostream>
#include <string>

using namespace std;

class FriendClass {
private:
    string name;

public:
    FriendClass(const string& n) : name(n) {}

    // Friend function declaration
    friend void printName(const FriendClass& obj);
};

// Friend function definition
void printName(const FriendClass& obj) {
    cout << "Name: " << obj.name << endl;
}

int main() {
    // Creating three objects of FriendClass
    FriendClass obj1("Object1");
    FriendClass obj2("Object2");
    FriendClass obj3("Object3");

    // Calling the friend function to print names
    printName(obj1);
    printName(obj2);
    printName(obj3);

    return 0;
}


