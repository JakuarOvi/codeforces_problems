//MD Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;
#define sort(a)        sort(a,a+n)
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define cin(n)         int n; cin>>n;
#define tc             int t; cin>>t; while(t--)
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define end1           "\n"
int main() {
    tc
    {
        string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();
    
    char c1 = s1[n1 - 1], c2 = s2[n2 - 1];
    bool found = n1 > n2;
    if (s1 == s2)
    {
      cout << "=\n";
      continue;
    }
    else if (c1 == c2 && c1 == 'S')
      found = !found;
      
      
    else if (c1 != c2)
      found = c1 < c2;
    cout << (found ? '>' : '<') << endl;
}

    }

    