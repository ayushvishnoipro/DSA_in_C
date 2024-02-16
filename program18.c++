#include <iostream>

using namespace std;
class Counter
{
private:
    int number;

public:
    // Constructor to initialize number
    Counter()
    {
        number = 0;
    }

    // Member function to increment number
    void increment()
    {
        number++;
    }

    // Member function to get the current value of number
    int getValue()
    {
        return number;
    }
};

int main()
{
    // Creating an instance of the Counter class
    Counter myCounter;

    // Incrementing the counter
    myCounter.increment();

    // Getting the current value of the counter
    std::cout << "Current value of the counter: " << myCounter.getValue() << std::endl;

    return 0;
}

#include <iostream>
using namespace std;

void matrixAddition(int mat1[][3], int mat2[][3], int result[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    // Perform matrix addition
    matrixAddition(matrix1, matrix2, resultMatrix);

    // Displaying matrices
    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1);
    cout << endl;

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2);
    cout << endl;

    cout << "Resultant Matrix after addition:" << endl;
    displayMatrix(resultMatrix);

    return 0;
}

