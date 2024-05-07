//MD Jakuar Hossain Ovi
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
#define and            &&
#define or             ||
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a < b and b < c)
        cout << "STAIR\n";
    else if (a < b and b > c)
        cout << "PEAK\n";
    else
        cout << "NONE\n";
}

int main()
{
    tc
    {
        solve();
    }

}
