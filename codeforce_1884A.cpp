//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;
#define sort(a)        sort(a,a+n)
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int
#define cin(n)         int n; cin>>n;
#define tc             int t; cin>>t; while(t--)
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i]
#define loop(n)        for(int i=0;i<n;i++)
#define mod            1000000007
#define end1           "\n"
#define fast()        ios::sync_with_stdio(false); cin.tie(nullptr)

ll solve(ll x){
    ll res=0;
    while(x > 0)
    {
    res += x % 10; 
    x /= 10;
    }
    return res;
}

int main(){

    tc
    {
        ll x, k; 
        cin>>x>>k;
        ll res(x);
        while(solve(x) % k)
        {
        ++x;
        }
        cout<<x<<endl;
        
    }

}