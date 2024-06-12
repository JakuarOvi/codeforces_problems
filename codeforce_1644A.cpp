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
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i]
#define loop(n)        for(int i=0;i<n;i++)
#define mod            1000000007
#define end1           "\n"
 #define fast()        ios::sync_with_stdio(false); cin.tie(nullptr)


int main() {
        tc
        {
          string s;
          cin>>s;
          for(int i=0;i<s.length();i++)
          {
             // if((s[i]=='r' and s[i+1]=='R' )or(s[i]=='b' and s[i+1]=='B')or(s[i]=='g' and s[i+1]=='G'))
            if(s.find('b') < s.find('B') and s.find('r')<s.find('R')and s.find('g')<s.find('G'))
            { 
             yes;
              break;
             }
              else
              {
               no;
              break;
              }
          }
         }

    return 0;
}
    