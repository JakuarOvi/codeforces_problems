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
    tc
    {
        int a,b;
        cin>>a>>b;
        if(b<a)
        {
            swap(a,b);
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
        }
    }

    return 0;
}
