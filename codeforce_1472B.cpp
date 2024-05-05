//MD Jakuar Hossain Ovi
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
    // Your code here
    tc {
        int n;
        cin >> n;

        int count1 = 0, count2 = 0;
        int w;

        for (int i = 0; i < n; i++) {
            cin >> w;
            if (w == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        if (count1 % 2 == 0 && count2 % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
