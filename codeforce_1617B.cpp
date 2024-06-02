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
tc{
    long n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "2 " << n - 3 << " 1" << endl;
    } else if (n % 4 == 1) {
        cout << n / 2 - 1 << " " << n / 2 + 1 << " 1" << endl;
    } else if (n % 4 == 3) {
        cout << n / 2 - 2 << " " << n / 2 + 2 << " 1" << endl;
    }
    }

    return 0;
}
