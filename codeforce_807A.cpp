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
#define FastRead       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main() {
FastRead;
    // Your code here
     int n,a[5000],b[5000];
    cin>>n;

    int rated = 0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        if(a[i] != b[i]){
            rated = 1;
        }
    }
    if(rated == 1){
        cout<<"rated\n";
        return 0;
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] < a[j]){
                rated = -1;
            }
        }
    }


    if(rated == -1){
        cout<<"unrated\n";
    }
    else{
        cout<<"maybe\n";
    }

    return 0;
}
