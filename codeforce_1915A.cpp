//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl

int main()
{
  tc
  {
  int a, b, c;
        cin >> a >> b >> c;

        if (a == b) {
            cout << c << endl;
        } else if (a == c) {
            cout << b << endl;
        } else {
            cout << a << endl;
        }
  }
    return 0;
}