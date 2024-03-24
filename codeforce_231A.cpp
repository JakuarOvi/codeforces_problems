
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, Petya, Vasya, Tonya, n=0;
    cin >> t;
    while (t--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            n += 1;
        }
    }
    cout << n << endl;
    return 0;
}
