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
  int n = 8;
        string s;
        while(n--)
        {
            string st;
            cin>>st;
            for(auto i : st)
            {
                if(i>=97 && i<=122)
                s += i;
            }
        }
        cout<<s<<endl;
  }
    return 0;
}