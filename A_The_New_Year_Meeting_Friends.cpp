//MD Jakuar Hossain Øvi 
#include <bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int 
#define fl(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,b,a) for(int i=b;i>=a;i--)
#define tc int t; cin>>t;
#define w(t) while(t--)
#define vi vector<int>
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define mod 1000000007

int main() {
    int a[3];
    for(int i=0;i<3;i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    int result = a[2] - a[0];

    cout << result << endl;

    return 0;
}