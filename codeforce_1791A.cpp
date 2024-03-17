#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char c;
        cin >> c;

        string codeforces = "codeforces";
        bool found = false;

        for (char ch : codeforces) {
            if (ch == c) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
