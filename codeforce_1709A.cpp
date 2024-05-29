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

int main() {
    tc{
      int x;
    int a[3];
    cin>>x;
    cin>>a[0]>>a[1]>>a[2];
    int cur = a[x - 1] - 1;
    int c = 1;
    while (cur != -1)
    {
      cur = a[cur] - 1;
      c++;
    }
    cout << ((c < 3) ? "NO" : "YES") << "\n";
    }
    return 0;
}
    
