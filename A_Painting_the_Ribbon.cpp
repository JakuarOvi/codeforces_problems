//Bismillahir Rahmanir Rahim
//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;

#define sort(a)        sort(a,a+n)
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
#define FastRead       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main() {
FastRead;
    //  write Your code here
    tc
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll paint=(m-1)*(n/m)+(n%m>0)*(n%m-1);
        if(k<paint) yes;
        else no;


    }

    return 0;
}
