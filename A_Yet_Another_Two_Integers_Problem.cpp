//MD Jakuar Hossain Øvi

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t;
#define w(t)           while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007

int main() {
    // Your code here
    tc;
    w(t)
    {
        ll a,b;
        cin>>a>>b;

        ll sub=0,sum=0,div=0,result=0;
        if(b<a)
        {
           swap(a,b);
        }
        sub=b-a;
        div=sub/10;
        result=sub%10;

       sum=div;
       if(result>0)
       {
        sum++;
       }
        cout<<sum<<endl;
    }

    return 0;
}
