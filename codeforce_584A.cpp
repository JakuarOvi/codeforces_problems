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
int main() {
    // Your code here
   long int x,y,n,i,t;
    while(cin>>n>>t){
        if(n==1&&t==10)
            cout<<"-1\n";
        else if(n>=2&&t==10)
        {
            for(i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0\n";
        }
        else
        {
            for(i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
    }

    return 0;
}
