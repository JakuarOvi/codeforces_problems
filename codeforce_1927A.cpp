#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t, n;
	string s;
	cin >> t;
	
	while(t--){
		cin >> n;
		cin >> s;
		
		int ans = 0;
		int mulai, brenti;
		for(int i = 0; i < n; i++){
			if(s[i] == 'B'){
				mulai = i;
				break;
			}
		}
		
		for(int i = n - 1; i >= 0; i--){
			if (s[i] == 'B'){
				brenti = i + 1;
				break;
			}
		}
		
		if(brenti == mulai){
			cout << "1" << endl;
		}
		
		else{
			cout << brenti - mulai <<endl;
		}
		
	}
	return 0;
}
    		