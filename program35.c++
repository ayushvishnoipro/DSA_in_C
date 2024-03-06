#include <iostream>
#include <vector>
using namespace std;

class First {
private:
    int data;

public:
    First(int val) : data(val) {}

    void display() const {
        cout << "Data: " << data << endl;
    }
};

class Second {
private:
    vector<First> container;

public:
    void add(const First& first) {
        container.push_back(first);
    }

    void displayAll() const {
        cout << "Contents of Second container:" << endl;
        for (const First& first : container) {
            first.display();
        }
    }
};

int main() {
    Second container;
    container.add(First(1));
    container.add(First(2));
    container.add(First(3));

    container.displayAll();

    return 0;
}
