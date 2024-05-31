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
 #define fast()        ios::sync_with_stdio(false); cin.tie(nullptr)


int main() {
        fast();
       int n, cnt = 0, i = 1, m = 1;

    cin>>n;

    while(m <= n){

        m = ((i*i) + i) / 2;

        if(m > n) break;

        n = n - m;

        cnt++;

        i++;
    }

    cout<<cnt<<endl;
}