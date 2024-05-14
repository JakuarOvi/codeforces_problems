//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
  
      
      
       int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	sort(a, a+n);
	int res = 0;
	for (int i = 0; i < n; i += 2) {
		res += a[i + 1] - a[i];
	}
	
	cout << res << endl;
      
}
    
    