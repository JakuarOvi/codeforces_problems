
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Sort the three numbers in ascending order
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        // The middle element is the medium number
        int mid = v[1];

        cout << mid << endl;
    }

    return 0;
}

