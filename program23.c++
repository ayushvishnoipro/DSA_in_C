#include <iostream>
#include <string>

using namespace std;

// Friend class declaration
class FriendClass;

// Class declaration
class MyClass {
private:
    string name;

public:
    // Constructor
    MyClass(string n) {
        name = n;
    }

    // Friend declaration
    friend class FriendClass;
};

// Friend class definition
class FriendClass {
public:
    // Function to access private member of MyClass
    static void displayFriendName(MyClass obj) {
        cout << "Friend's name: " << obj.name << endl;
    }
};

int main() {
    // Create objects of MyClass for each friend
    MyClass friend1("Friend 1");
    MyClass friend2("Friend 2");
    MyClass friend3("Friend 3");

    // Display friends' names using the FriendClass
    cout << "Displaying friends' names using multiple objects:\n";
    FriendClass::displayFriendName(friend1);
    FriendClass::displayFriendName(friend2);
    FriendClass::displayFriendName(friend3);

    return 0;
}
