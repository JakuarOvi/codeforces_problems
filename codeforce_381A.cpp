//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
  
    ll n,i;
    while(cin>>n)
    {
        ll a[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        ll l=1,r=n,sum1=0,sum2=0;
        i=1;
        while(l<=r)
        {
            if(i%2==1)
            {
                if(a[l]>=a[r])
                    sum1+=a[l++];
                else
                    sum1+=a[r--];
            }
            else
            {
                if(a[l]>=a[r])
                    sum2+=a[l++];
                else
                    sum2+=a[r--];
            }
            i++;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}

       
      

    
    