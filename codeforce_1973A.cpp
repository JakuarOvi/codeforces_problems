//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;
//#define sort(a)        sort(a,a+n)
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define cin(n)         int n; cin>>n;
#define tc             int t; cin>>t; while(t--)
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define loop(n)        for(int i=0;i<n;i++)
#define mod            1000000007
#define end1           "\n"
 #define fast()        ios::sync_with_stdio(false); cin.tie(nullptr)


int main() {
tc{
    int p1, p2, p3;

		cin >> p1 >> p2 >> p3;

	int ans;
    if((p1+p2+p3)%2!=0)
    {
        ans=-1;
    }
	else
    {
        ans=(p1+p2+min(p1+p2,p3))/2;
    }
    
    	cout << ans << endl;
    }

    return 0;
}
    