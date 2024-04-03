#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int A = max(0, max(b, c) + 1 - a);
        int B = max(0, max(a, c) + 1 - b);
        int C = max(0, max(a, b) + 1 - c);
        cout << A << " " << B << " " << C << endl;
    }
    return 0;
}
