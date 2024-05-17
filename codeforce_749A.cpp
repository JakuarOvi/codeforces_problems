//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
   int n;
    cin >> n;
    
    if(n % 2 == 1) {
        n /= 2;
        n--;
        cout << n + 1 << endl << 3 << ' ';
    } else {
        n /= 2;
        cout << n << endl;
    }
    
    for(int i = 0; i < n; i++) cout << 2 << ' ';
    cout << endl;
  
    
}


       
      

    
    