#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first_maximum = nums[0];
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > first_maximum) {
                first_maximum = nums[i];
                ans = i;
            }
        }

        nums[ans] = 0;
        int second_maximum = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > second_maximum) {
                second_maximum = nums[i];
            }
        }

        if (first_maximum >= second_maximum * 2) return ans;
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 6, 1, 0};
    cout << s.dominantIndex(nums);
}
