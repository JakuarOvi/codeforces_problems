
#include<bits/stdc++.h>

using namespace std;
int main()
{
    fastread();
    string a,b,c;
    cin>>a>>b;
    int n = a.length();
    for(int i=0; i<n; i++){
        if( (a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1') ){
            c += '1';
        }
        else{
            c += '0';
        }
    }
    cout<<c<<endl;

    return 0;
}