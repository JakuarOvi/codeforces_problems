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
        fast();
        tc{
        string a;
    	cin>>a;
		string b="314159265358979323846264338327";
	//	int k=a.size();
		int c=0;
		for(int i=0; i<b.length(); i++)
		{		if (a[i]==b[i])++c;
				else break;
		}
		cout<<c<<endl;
        }
}
