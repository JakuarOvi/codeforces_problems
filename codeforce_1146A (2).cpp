//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl

int main()
{
  int len=0,asum=0;
    string s;
    cin>>s;
    len=s.length();
    for(int i=0; i<len; i++)
        if(s[i]=='a')
            asum++;
         
    cout<<min(len,2*asum-1)<<endl;
    return 0;
}