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
    
    
    string s;
    cin>>s;
    ll cnt, x , y;
    cnt=x=y=0;
    ll sz=s.size();
    for(int i=0; i<sz ;i++)
        if(s[i]=='Q')
            cnt+=x,y++;
        else if(s[i]=='A')
            x+=y;

    cout<<cnt<<endl;

    return 0;
}