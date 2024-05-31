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
#define mod            1000000007
#define end1           "\n"
int main() {
    int sum=0;
    tc
    {
        
        string s;
        cin>>s;
        
        if(s=="Tetrahedron"){
        sum+=4;}
        else if(s=="Cube"){
        sum+=6;}
        else if(s=="Octahedron"){
        sum+=8;}
        else if(s=="Dodecahedron"){
        sum+=12;}
        else if(s=="Icosahedron"){
        sum+=20;}
        
    }
        cout<<sum<<endl;
 }

    