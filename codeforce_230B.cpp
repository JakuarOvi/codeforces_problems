#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
     cin >> n;

    for (int i = 0; i < n; ++i) {
        long long num;
         cin >> num;

        long long root = sqrt(num);
        if (root * root == num) {
            if (root == 2 || (root > 2 && root % 2 != 0)) {
                bool is_prime = true;
                for (long long j = 3; j * j <= root; j += 2) {
                    if (root % j == 0) {
                        is_prime = false;
                        break;
                    }
                }

                if (is_prime) {
                     cout << "YES\n";
                    continue;
                }
            }
        }

         cout << "NO\n";
    }

    return 0;
}
