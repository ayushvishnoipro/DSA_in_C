#include <iostream>
#include <stdexcept> // for std::invalid_argument

using namespace std;

// Inline function to check eligibility for voting
inline bool isEligibleForVoting(int age) {
    return age >= 18;
}

int main() {
    try {
        // Get candidate's age
        int candidateAge;
        cout << "Enter candidate's age: ";
        cin >> candidateAge;

        // Input validation
        if (cin.fail()) {
            throw invalid_argument("Invalid input. Please enter a valid integer.");
        }

        // Check eligibility using the inline function
        if (isEligibleForVoting(candidateAge)) {
            cout << "The candidate is eligible for voting.\n";
        } else {
            cout << "The candidate is not eligible for voting.\n";
        }
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return 1; // Exit with an error code
    }

    return 0;
}
