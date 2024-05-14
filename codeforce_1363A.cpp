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
       int x,n,m,d,a;
        int even = 0,odd = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 0)
            even++;
            else 
            odd++;
        }
         m = min(even,x-1);
         d = x - m;

        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
        
      }
}
    
    