#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a structure for student
struct Student {
    string name;
    int registrationNumber;
    string department;
    vector<string> subjects;
};

// Function to display student information
void displayStudent(const Student& stud) {
    cout << "Student Name: " << stud.name << endl;
    cout << "Registration Number: " << stud.registrationNumber << endl;
    cout << "Department: " << stud.department << endl;
    
    cout << "Subjects: ";
    for (const string& subject : stud.subjects) {
        cout << subject << ", ";
    }
    cout << endl << endl;
}

int main() {
    // Declare a single student
    Student student;

    // Input student information
    cout << "Enter information for the Student:" << endl;
    cout << "Name: ";
    getline(cin >> ws, student.name);
    cout << "Registration Number: ";
    cin >> student.registrationNumber;
    cout << "Department: ";
    getline(cin >> ws, student.department);

    // Input subjects
    cout << "Enter the subjects (enter 'done' to finish):" << endl;
    string subject;
    while (true) {
        cout << "Subject: ";
        getline(cin >> ws, subject);
        if (subject == "done") {
            break;
        }
        student.subjects.push_back(subject);
    }

    // Display student information
    cout << "Student Information:" << endl;
    displayStudent(student);

    return 0;
}
