//MD Jakuar Hossain Øvi 

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
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
     ll n,ans = 0;
    cin>>n;
    ll a = 1;
    while(a <= n) {
        a *= 10;
    }
    a /= 10;
    ll b = a;
    while(b <= n) {
        b += a;
    }
    ans = b - n;

    cout<<ans<<endl;

    return 0;
}
