#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate the minimum cost
int min_cost(int n, int a, int b) {
    if (b < 2 * a) {
        return (n / 2) * b + (n % 2) * a;
    } else {
        return n * a;
    }
}

int main() {
    // Reading the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--) {
        // Reading inputs for each test case
        int n, a, b;
        cin >> n >> a >> b;

        // Calculating and printing the minimum cost for current test case
        cout << min_cost(n, a, b) << endl;
    }

    return 0;
}

