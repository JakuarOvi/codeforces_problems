//MD Jakuar Hossain Ovi 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tc  int t; cin>>t; while(t--)
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl


int main()
{
  
    tc
    
    {
    string s;
    cin>>s;
    //int x=s.strlen();
    if(s.length()%2==0){
    string d,f;
    for(int i=0;i<s.length()/2;i++)
    {
         d+=s[i]; 
    }
    for(int i=s.length()/2;i<s.length();i++)
    {
         f+=s[i];
    }
    
    
    if(d==f)
    yes;
    else
    no;
    }
    else
    no;
    }
}


       
      

    
    