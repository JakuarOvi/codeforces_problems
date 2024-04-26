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
     int hh, mm, a;
    char s;
    std::cin >> hh >> s >> mm >> a;

    int total_min = (hh * 60)+ mm + a;
    int new_hh = total_min / 60;
    int new_mm = total_min % 60;
    new_hh %= 24;

    if (new_hh < 10) {
        cout << "0" << new_hh;
    } else {
        cout << new_hh;
    }
    cout << s;
    if (new_mm < 10) {
        cout << "0" << new_mm;
    } else {
        cout << new_mm;
    }
    cout <<endl;

    return 0;
}
