#include <iostream>
#include <string>

using namespace std;

class Student {


public:
    string name;
    // Method to read student name
    void readName() {
        cout << "Enter student name: ";
        getline(cin, name);
    }

    // Method to display student name
    void displayName() {
        cout << "Student Name: " << name << endl;
    }
}student1, student2, student3;

int main() {
    // Creating three objects of Student class
    // Student student1, student2, student3;

    // Reading names for each student
    student1.readName();
    student2.readName();
    student3.readName();

    // Displaying names for each student
    student1.displayName();
    student2.displayName();
    student3.displayName();

    return 0;
}
