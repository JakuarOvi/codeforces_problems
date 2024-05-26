#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string r = "codeforces";
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < 10; i++){
        
            if (s[i] != r[i])
                {
                c++;
                }
    }
    cout << c << endl;
    }
    return 0;
}
