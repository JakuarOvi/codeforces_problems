//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
  ll A=2050;
  tc
  {
         ll n;
        cin >> n;
        if (n % A != 0) {
            cout << "-1" << endl;
            continue;
        }
        ll d = n / A;
        ll res = 0;
        while (d > 0) {
            res += (d % 10);
            d /= 10;
        }
        cout << res << endl;
   
  }
      
      
       
      
}
    
    