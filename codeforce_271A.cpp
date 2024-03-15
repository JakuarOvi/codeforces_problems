
#include <iostream>
#include <string>
using namespace std;

bool hasDistinctDigits(int year) {
    string digits = to_string(year);
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (digits[i] == digits[j]) {
                return false;
            }
        }
    }
    return true;
}

int findNextDistinctYear(int currentYear) {
    int nextYear = currentYear + 1;
    while (!hasDistinctDigits(nextYear)) {
        nextYear++;
    }
    return nextYear;
}

int main() {
    int y;
    cin >> y;

    cout << findNextDistinctYear(y) << endl;

    return 0;
}
