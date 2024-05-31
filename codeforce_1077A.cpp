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
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define loop(a,n)     for(int i=0;i<n;i++)
#define mod            1000000007
#define end1           "\n"


int main() {
    ll a,b,q,d,ans; 
    tc{
   ans=d=0;
        cin>>a>>b>>q;
        if(q%2==1){
            d=(q/2)+1;
        }else{
            d=q/2;
        }
        ans=(d*a)-((q-d)*b);
        cout<<ans<<"\n";
    }

    return 0;
}