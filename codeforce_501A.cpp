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


int main()
 {
     ll x,y,a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        x=max((3*a)/10,a-(a/250)*c);
        y=max((3*b/10),b-(b/250)*d);
        if(x==y)
            cout<<"Tie\n";
        else if(x>y)
            cout<<"Misha\n";
        else
            cout<<"Vasya\n";
    }
        
     
        return 0;
}
    