//MD Jakuar Hossain Øvi 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);

        bool ans = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] != 1 && a[i] - a[i - 1] != 0) {
                ans = false;
                break;
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
