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


int main() {
    int h1,h2,h3,h4,h5,m1,m2,m3;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    h3 = h1 * 60 + m1;
    h4 = h2 * 60 + m2;
    h5 = (h3 + h4)/2;
    int h = h5/60;
    int m = h5 % 60;
    if(h > 9 && m > 9){
        cout<<h<<":"<<m<<endl;
    }
    else{
        if(h < 10){
            cout<<0;
        }
        cout<<h<<":";
        if(m < 10){
            cout<<0;
        }
        cout<<m<<endl;
    }
     
        return 0;
}
    