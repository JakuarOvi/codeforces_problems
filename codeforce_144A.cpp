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


int main() {
    
    int n, a;
    cin >> n >> a;
    int mina(a), maxa(a), mini(0), maxi(0);
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;

    return 0;
}