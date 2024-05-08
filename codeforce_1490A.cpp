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

int solve(int a[], int n)
{
    int c = 0;
    for(int i=1; i<n; i++)
    {
        int maxi = max(a[i], a[i-1]);
        int mini = min(a[i], a[i-1]);
        while(maxi > 2*mini)
        {
            c++;
            mini = mini*2;
        }
    }
    return c;
}

int main()
{
   
    tc
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<solve(a, n)<<endl;
    }
    return 0;
}