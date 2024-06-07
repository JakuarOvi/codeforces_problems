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
    // Your code here
    tc{
    int n;
		cin >> n;
		if(n < 10) cout << n << endl;
		else{
			int ans = 9, j;
			for(int i = 10, j = 1; i <= n; ++j){
				int k = i * j;
				if(k > n) break;
				++ans;
				if(j == 10){
					j = 1;
					i = i * 10;
				}
			}
			cout << ans << endl;;
		}
    }

    return 0;
}
