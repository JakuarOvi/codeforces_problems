#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int n;
     cin>>n;
    long long int a[n];
   
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[(n-1)/2]<<endl;
    return 0;
}