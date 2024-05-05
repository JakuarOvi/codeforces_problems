//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t; while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007

int main() {
    // Your code here
     int n, x;
  tc{
    cin>>n;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
      cin>>x;
      if(x == 1){
        cnt1++;
        continue;
      }
      cnt2++;
    }
    if(cnt2 % 2 == 0 && cnt1 % 2 == 0){
      yes;
      continue;
    }
    if(cnt2 % 2 != 0 && cnt1 % 2 == 0 && cnt1 > 0){
     yes;
      continue;
    }
   no;
  }
  return 0;
}

 
