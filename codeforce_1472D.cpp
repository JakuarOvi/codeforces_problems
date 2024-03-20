#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll sum = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                sum += (arr[i] % 2 == 0) ? arr[i] : 0;
            } else {
                sum -= (arr[i] % 2 != 0) ? arr[i] : 0;
            }
        }
        cout << (sum > 0 ? "Alice" : (sum < 0 ? "Bob" : "Tie")) << endl;
    }
    return 0;
}

