#include <iostream>
using namespace std;
#define FastInput ios_base::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>
#define ll long long

int main() {

    FastInput

    long long n,total,p,ans=0;
    cin>>n>>total;

    char ch;
    
    for(int i=0;i<n;i++){

        cin>>ch;
        cin>>p;

        if(ch=='+')
            total+=p;
        else if(total>=p)
            total-=p;
        else
           ans++;

    }

    cout<<total<<" "<<ans<<endl;



}
