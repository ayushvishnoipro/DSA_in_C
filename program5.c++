#include <iostream>

using namespace std;

// Inline function to check eligibility for voting
inline bool isEligibleForVoting(int age) {
    return age >= 18;
}

int main() {
    // Get candidate's age
    int candidateAge;
    cout << "Enter candidate's age: ";
    cin >> candidateAge;

    // Check eligibility using the inline function
    if (isEligibleForVoting(candidateAge)) {
        cout << "The candidate is eligible for voting.\n";
    } else {
        cout << "The candidate is not eligible for voting.\n";
    }

    return 0;
}
