



//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
tc{
   long l, r, a;
   cin>>l>>r>>a;
        long d = r / a;
        long m = r % a;
        long res = d + m;
        long prev = (d - 1) * a + (a - 1);
        if(prev >= l){
            long tmp = (d - 1) + (a - 1);
            res = (res > tmp) ? res : tmp;
        }

        cout<<res<<endl;
  }
    
}


       
      

    
    
