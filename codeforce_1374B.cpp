
// Jakuar Hossain Ovi  
  
#include<bits/stdc++.h>
using namespace std;
void solve(long long n)
{
	
	long long num=n,count=0;
	while(num!=1)
	{
		if(num%6==0){
			num/=6;
            count++;
            }
		else if(num%3==0){
			num*=2;
            count++;
            }
		else
		{
			count=-1;
			break;
		}
	}
	cout<<count<<endl;
}
int main()
{
    
	int t;
	cin>>t;
	while(t--)
	{
        long long n;
    	cin>>n;
		solve(n);
	}
    return 0;
}
