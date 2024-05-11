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
int main() {
    // Your code here
    int  n,msum=0,bsum=0;
    tc
    {
  long long n;
        cin >> n;
        long long sum = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {

            long long x;
            cin >> x;
            if (x % 2 == 0)
            {
                sum += x;
            }
            else
                odd += x;
        }
        if (sum > odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
    }


    return 0;
}
