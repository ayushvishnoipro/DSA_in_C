
//Certainly! Here's an example C++ program illustrating the use of an array of objects with a Book class, which has variables for the book name and price. The program also uses the namespace std:








































#include <iostream>
#include <string>

using namespace std; // Using namespace std to simplify code

// Book class definition
class Book {
public:
    // Member variables
    string bookName;
    double price;

    // Constructor
    Book(string name, double bookPrice) : bookName(name), price(bookPrice) {}

    // Member function to display book information
    void display() {
        cout << "Book Name: " << bookName << ", Price: $" << price << endl;
    }
};

// Main function
int main() {
    // Creating an array of 3 book objects
    Book books[3] = {
        {"Introduction to C++", 29.99},
        {"Data Structures and Algorithms", 39.99},
        {"The Art of Programming", 49.99}
    };

    // Displaying information of each book
    for (int i = 0; i < 3; ++i) {
        cout << "Book " << (i + 1) << " Information:" << endl;
        books[i].display();
        cout << endl;
    }

    return 0;
}

