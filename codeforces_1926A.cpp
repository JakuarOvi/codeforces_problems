#include <iostream>
#include <string>
 
int main() {
    int t;
    std::cin >> t;
 
    while (t--) {
        std::string s;
        std::cin >> s;
 
        int countA = 0, countB = 0;
 
        for (char c : s) {
            if (c == 'A') {
                countA++;
            } else if (c == 'B') {
                countB++;
            }
        }
 
        if (countA > countB) {
            std::cout << "A" << std::endl;
        } else {
            std::cout << "B" << std::endl;
        }
    }
 
    return 0;
}
