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
void solve(ll n)
{


        /*
        while(n>0)
        {
           m=n%10;
           sum=sum+m;
           n=n/10;
        }
        //cout<<<<sum<<endl;
        */


        vi vec;
        int count=0;
        for (int i=2; i*i<=n; i++)
        {
            if (n % i == 0)
            {
                int d = n/i;

                for (int j=i+1; j*j<d; j++)
                {
                    if (d % j == 0)
                    {
                        yes;
                        cout<<i<<" "<<j<<" "<<d/j<<endl;

                        return;
                    }
                }
            }
        }
        no;

        /*

        ll a=vec[0];//2
        ll b=vec[1];//4
        ll c=vec[2];//8
        ll  result=a*b*c;//2*4*8=64
        if(result==n)
        {
           yes;
           cout<<a<<" "<<b<<" "<<c<<endl;
        }

        else
        {
           c=vec[4];//for 12345-->3,5,
           result=a*b*c;
            if(result==n)
        {
           yes;
           cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else no;

        }
        /*
        ll multi=1;
        for(auto it : vec)
        {
            cout<<it<<" ";
            multi=multi*it;
            if(multi==n)
            {

         //   return 0;
            }

        }
        if(count<3)
        no;
        else
        yes;
        */

        /* */
}

int main()
{
    tc
    {
        ll n,sum=0,m;
        cin>>n;
        solve(n);

    }


    return 0;
}
