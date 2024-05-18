//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
tc{
   ll n,f,a,b;
   cin>>n>>f>>a>>b;
   ll ar[n],sum=0,temp=0;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
       ll dif=ar[i]-sum;
       sum=ar[i];
       temp += ( ((a * dif) < b) ? (a * dif) : b);
   }
   puts(temp < f ? "YES" : "NO");
  }
    
}


       
      

    
    
