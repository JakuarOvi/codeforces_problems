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
cin>>n;
int curoff=0;
int untreated=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		curoff+=x;
		
	}
	else {
		if(curoff<1){
		++untreated;
		}
		else {
			--curoff;
		}
	}
}
cout<<untreated;
   
}
      
      
       
      

    
    