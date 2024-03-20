#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> v;
    for(int i = n - 1; i >= 0; i--) {
        if(find(v.begin(), v.end(), a[i]) == v.end()) {
            v.push_back(a[i]);
        }
    }

    cout << v.size() << endl;
    for(int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    return 0;
}

