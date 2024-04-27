//Jakuar Hossain Ovi
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
       
    long long a, b;
    cin >> a >> b;

    long long sum = a + b;

    if (sum & 1)
        cout << "Alice\n";
    else
        cout << "Bob\n";
    }

}
