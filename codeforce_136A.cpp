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
    int n,m,i;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a[m]=i;
    }
    cout<<a[1]<<" ";
    for(i=2; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
