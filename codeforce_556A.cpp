//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;

#define a[n]       int n; cin>>n;int a[n]
#define sort(x)        sort(a,a+n)
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t; while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
int main() {
    // Your code here
      int n, elm, c1, c0;
    string s;
    cin >> n;
    cin >> s;
    c1 = c0 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0')
            ++c0;
        else
            ++c1;
    }
    int rm = min(c0, c1);
    cout << n - 2 * rm;

    return 0;
}
