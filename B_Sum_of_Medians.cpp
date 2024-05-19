//Bismillahir Rahmanir Rahim
//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;

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
#define FastRead       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main() {
FastRead;
    // Your code here
     tc{
        ll n,k;
        cin>>n>>k;
        ll m=n*k;
        ll a[m];
        for(ll i=0;i<m;i++)
        {
            cin>>a[i];
        }
        ll sum=0,j=0;
        ll div=n/2;
        for(ll i=m-1-div;i>=0;i-=div+1)
        {
            sum+=a[i];
            j++;
            if(j==k) break;
        }
        cout<<sum<<endl;

    }

    return 0;
}
