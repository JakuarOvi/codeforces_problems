//MD Jakuar Hossain Øvi 

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t;
#define w(t)           while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007

int main() {
    // Your code here
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[2 * n];

        int count = 0;
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1)
                count++;
        }

        if (count == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    

    return 0;
}
