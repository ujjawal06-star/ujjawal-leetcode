#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7) return true;
        if (n < 10) return false;
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return isHappy(sum);
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    cout << (s.isHappy(n) ? "true" : "false");
    return 0;
}
