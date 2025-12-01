#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;

        for (int n : nums) {
            if ((n > 9 && n < 100) || (n > 999 && n < 10000) || n == 100000) {
                res++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << sol.findNumbers(nums);

    return 0;
}
