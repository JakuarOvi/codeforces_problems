#include<bits/stdc++.h>
using namespace std;

int borrowMoney(int k, int n, int w) {
    int total_cost = 0;
    for (int i = 1; i <= w; ++i) {
        total_cost += i * k;
    }
    
    int borrowed_money = max(0, total_cost - n);
    return borrowed_money;
}

int main() {
    int k, n, w;
  std::  cin >> k >> n >> w;
   std:: cout << borrowMoney(k, n, w) << endl;
    return 0;
}
