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

int main() {
    // Your code here
    tc
    {
        int n,a[1000];
        ll ans=0,sum1=0,sum2=0;
        int div=0;
        cin>>n;
        int k=0;
        for(int i=1; i<=n; i++){
            a[k++]=pow(2,i);
        }
        div=n/2;
        sum1=a[n-1];
        for(int i=0; i<=div-2; i++){
            sum1+=a[i];
        }
        for(int i=div-1; i<n-1; i++){
            sum2+=a[i];
        }
        ans = abs(sum1 - sum2);
        cout<<ans<<endl;
    }
    return 0;
}
