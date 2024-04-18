
#include<bits/stdc++.h>
using namespace std;



string color()
{
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    if(sum%2)
    return "NO";
    else
    return "YES";
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        cout<<color()<<endl;
    }
    return 0;
}