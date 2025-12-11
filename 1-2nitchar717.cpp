#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        for (; i < n - 1; i++) {
            if (bits[i] == 1) i++;
        }
        return i == n - 1;
    }
};

int main() {
    Solution s;
    vector<int> bits = {1,0,0};
    cout << (s.isOneBitCharacter(bits) ? "true" : "false");
    return 0;
}
