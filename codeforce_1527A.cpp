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
        int ans = log2(n);
        cout<<((1<<ans) - 1)<<endl;
    }
    

    return 0;
}