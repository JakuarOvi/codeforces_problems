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
    tc
    {
ll n;
    cin >> n;

    if (n < 7 or n == 9) {
        no;
        continue ;
    }

    yes;
    if (n % 3 == 0)
        cout << 1 << " " << 4 << " " << (n - 5) << endl;
    else
        cout << 1 << " " << 2 << " " << (n - 3) << endl;
}

    }

    