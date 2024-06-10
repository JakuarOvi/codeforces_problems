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
        string s;
        cin>>s;
        bool flag=true;
    
        for(int i=0;i<s.length();)
        {
            if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            {
                i+=3;
            }

            else if(s[i]=='1' && s[i+1]=='4')
            {
                i+=2;
            }

            else if(s[i]=='1')
            {
                i++;
            }

            else
            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<"YES";
        else
            cout<<"NO";
        
    
  

    return 0;
}
    