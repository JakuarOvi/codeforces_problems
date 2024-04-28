//MD Jakuar Hossain Øvi 

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
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
    tc {
        int r, b, d;
        cin >> r >> b >> d;
         int dif = abs(r - b);
        int mn = min(r, b);
         int each = (dif+mn-1)/mn;

        if(each <= d) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}

/*
input
4
1 1 0
2 7 3
6 1 4
5 4 0

output
YES
YES
NO
NO


*/
