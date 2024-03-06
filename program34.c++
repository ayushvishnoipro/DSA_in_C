#include <iostream>
using namespace std;

class DynamicObject {
public:
    DynamicObject() {
        cout << "Dynamic object created!" << endl;
    }
    ~DynamicObject() {
        cout << "Dynamic object destroyed!" << endl;
    }
};

int main() {
    int numObjects;
    cout << "Enter the number of dynamic objects to create: ";
    cin >> numObjects;

    DynamicObject **objects = new DynamicObject *[numObjects]; // Array of pointers to DynamicObject

    // Creating dynamic objects
    for (int i = 0; i < numObjects; ++i) {
        objects[i] = new DynamicObject();
    }

    // Deleting dynamic objects
    for (int i = 0; i < numObjects; ++i) {
        delete objects[i];
    }

    delete[] objects; // Don't forget to delete the array of pointers

    return 0;
}
