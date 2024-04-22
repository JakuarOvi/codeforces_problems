#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int result = k + (k - 1) / (n - 1);
        cout << result << endl;
    }

    return 0;
}
