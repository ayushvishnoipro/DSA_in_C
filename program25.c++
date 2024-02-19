// #include <iostream>

// using namespace std;

// // Define a structure for complex numbers
// struct Complex {
//     double real;
//     double imag;
// };

// // Function to subtract two complex numbers
// Complex subtractComplex(Complex num1, Complex num2) {
//     Complex result;
//     result.real = num1.real - num2.real;
//     result.imag = num1.imag - num2.imag;
//     return result;
// }

// int main() {
//     // Declare two complex numbers
//     Complex num1, num2, difference;

//     // Input for the first complex number
//     cout << "Enter real and imaginary parts of the first complex number:" << endl;
//     cout << "Real part: ";
//     cin >> num1.real;
//     cout << "Imaginary part: ";
//     cin >> num1.imag;

//     // Input for the second complex number
//     cout << "Enter real and imaginary parts of the second complex number:" << endl;
//     cout << "Real part: ";
//     cin >> num2.real;
//     cout << "Imaginary part: ";
//     cin >> num2.imag;

//     // Subtract the complex numbers
//     difference = subtractComplex(num1, num2);

//     // Display the result
//     cout << "Difference: " << difference.real << " + " << difference.imag << "i" << endl;

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

// Define a structure for employee
struct Employee {
    string name;
    double salary;
    string department;
};

// Function to display employee information
void displayEmployee(const Employee& emp) {
    cout << "Employee Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Department: " << emp.department << endl;
    cout << endl;
}

int main() {
    // Declare a single employee
    Employee employee;

    // Input employee information
    cout << "Enter information for the Employee:" << endl;
    cout << "Name: ";
    getline(cin >> ws, employee.name);
    cout << "Salary: ";
    cin >> employee.salary;
    cout << "Department: ";
    getline(cin >> ws, employee.department);

    // Display employee information
    cout << "Employee Information:" << endl;
    displayEmployee(employee);

    return 0;
}
