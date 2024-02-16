#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void fibonacci(int n)
{
    int first = 0, second = 1, next;
    for (int i = 0; i < n + 1; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int num1, int num2)
{
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int reversedNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
}

bool isPalindrome(int num)
{
    int orignal = num;
    int reversedNumber = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }
    return orignal == reversedNumber;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void displayPrimesBetween(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

bool isArmstrong(int num)
{
    int originalNum = num;
    int digitCount = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++digitCount;
    }

    // Reset originalNum to the original value
    originalNum = num;

    // Calculate the sum of each digit raised to the power of the digit count
    while (originalNum != 0)
    {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == num;
}

void displayFactors(int num)
{
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function to perform the operation based on the operator
double performOperation(char operation, double num1, double num2)
{
    switch (operation)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero is undefined." << endl;
            return 0.0;
        }
    default:
        cout << "Error: Invalid operator" << endl;
        return 0.0;
    }
}

// Function to check if a number can be expressed as the sum of two prime numbers
bool canExpressAsSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " can be expressed as the sum of " << i << " and " << (num - i) << endl;
            return true;
        }
    }
    cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    return false;
}

// Function to find the sum of natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}
// Function to calculate the factorial of a number using recursion
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to find GCD using recursion
int findGCDRecursion(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    return binaryNumber;
}


// Function to convert octal to decimal
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0, remainder;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }

    return decimalNumber;
}

// Function to convert decimal to octal
int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1, remainder;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += remainder * i;
        i *= 10;
    }

    return octalNumber;
}

// Function to convert binary to octal
int binaryToOctal(long long binaryNumber) {
    int octalNumber = 0, decimalNumber = 0, i = 0;

    // Convert binary to decimal
    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }

    i = 1;

    // Convert decimal to octal
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

// Function to convert octal to binary
long long octalToBinary(int octalNumber) {
    long long binaryNumber = 0;
    int decimalNumber = 0, i = 0;

    // Convert octal to decimal
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    i = 1;

    // Convert decimal to binary
    while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}


// Function to reverse a sentence using recursion
void reverseSentence(string& sentence, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end positions
    swap(sentence[start], sentence[end]);

    // Recursive call for the remaining part of the sentence
    reverseSentence(sentence, start + 1, end - 1);
}

// Function to calculate power using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

// Function to calculate power using recursion
double powerRecursion(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

// Function to find the largest element in an array
int findLargestElement(int arr[], int size) {
    // Assume the first element is the largest
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to calculate the mean (average) of an array
double calculateMean(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

// Function to calculate the standard deviation of an array
double calculateStandardDeviation(int arr[], int size) {
    double mean = calculateMean(arr, size);
    double sumSquaredDiff = 0;

    for (int i = 0; i < size; ++i) {
        sumSquaredDiff += pow(arr[i] - mean, 2);
    }

    double variance = sumSquaredDiff / size;
    double standardDeviation = sqrt(variance);

    return standardDeviation;
}

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

// Function to add two matrices
void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}




int main()
{
    int digit;
    cin >> digit;
    cout<<sumOfNaturalNumbers(digit)<<endl;
    
}

// int main(){
//     char a;
//     cin>>a;

//     if (a=='a' || a=='e' || a=='i' ||a=='o' || a=='u')
//     {
//         cout<<"this is a vovel"<<endl;

//     }
//     else if (a=='A' || a=='E' || a=='I' || a=='O' ||a=='U')
//     {
//         cout<<"this is a vovel"<<endl;
//     }
//     else{
//         cout<<"this is a constant";

//     }

// }