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
    int n;
    cin>>n;
    int a=n%7;
    if(a<=n%10)
    n-=a;
    else n+=7-a;
    cout<<n<<"\n";
    }
    

    return 0;
}