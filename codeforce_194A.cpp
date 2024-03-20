#include <iostream>

using namespace std;

int main() {
    int n, k;

    // Read input values for number of exams and maximum allowed wrong answers
    cin >> n >> k;

    // Calculate maximum possible score (all correct)
    int max_score = n * 3;

    // Determine actual score (number of correct answers)
    int actual_score = max(max_score - k, 0); // Ensure non-negative score

    // Print the actual score to standard output
    cout << actual_score << endl;

    return 0;
}
