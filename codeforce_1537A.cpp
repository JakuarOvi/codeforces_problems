#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;  
    while (t--) {
        long n, s = 0, x;
        cin >> n;
        for (long i = 0; i < n; i++) {
            cin >> x;  
            s += x; 
        }
         cout << (s >= n ? s - n : 1) << endl;
    }
    
    return 0;
}
