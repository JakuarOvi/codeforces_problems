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
        cin(n);
        int a[n],cnt=1,i;
        for(i=2;i*i<n;i++)
        {
            if(n%i==0)
            cnt+=2;
        }
        if((double)sqrt(n)==(int)sqrt(n))
        cnt++;
        cout<<cnt<<endl;
}
