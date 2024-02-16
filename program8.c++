// write a c++ program using functions with arguments to find out sum of first 10 natural numbers


#include <iostream>

using namespace std;

// Function to calculate the sum of first n natural numbers
int calculateSum(int n) {
    int sum=0;
    for (int i = 0; i < n+1; i++)
    {
        sum+=i;
    }
    
    return sum;
}

int main() {
    // Calculate the sum of the first 10 natural numbers
    int n = 10;
    int sum = calculateSum(n);

    // Display the result
    cout << "The sum of the first 10 natural numbers is: " << sum << endl;

    return 0;
}
