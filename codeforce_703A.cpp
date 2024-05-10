//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
#define ll long long
#define tc  int t; cin>>t; while(t--)
using namespace std;
int main()
{
    int mishka,chris,msum=0,csum=0;
    tc
    {
    cin>>mishka>>chris;
    if(mishka>chris)
    {
    msum++;
    }
    else if(chris>mishka)
    {
    csum++;
    }
        
    }
    if(msum>csum)
    {
    cout<<"Mishka"<<endl;
    }
    else if(csum>msum)
    {
    cout<<"Chris"<<endl;
    }
    else
    {
    cout<<"Friendship is magic!^^"<<endl;
    }
    

    return 0;
}