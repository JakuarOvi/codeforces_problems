//MD Jakuar Hossain Øvi 

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
#define loop(a,n)     for(int i=0;i<n;i++)
#define mod            1000000007

int main() {
    // Your code here
   tc {
        int n;
        cin >> n;
        vi b(n);
        input(b, n);
        
        vi a;
        int left = 0, right = n - 1;
        
        while (left <= right) {
            a.push_back(b[left++]);
            if (left <= right) {
                a.push_back(b[right--]);
            }
        }
        
        loop(a,n) {
            cout << a[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
