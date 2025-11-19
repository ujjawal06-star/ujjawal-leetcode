#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int smallest = INT_MAX, largest = INT_MIN;
        for (int x : nums) {
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
        if (largest - smallest - 2 * k <= 0 || nums.size() == 1)
            return 0;
        return largest - smallest - 2 * k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 6};
    cout << s.smallestRangeI(nums, 3);
}
