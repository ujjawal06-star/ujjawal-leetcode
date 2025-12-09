#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() < 2) return true;

        int direction = 0;

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                if (direction == 0) direction = 1;
                else if (direction == -1) return false;
            } 
            else if (nums[i] < nums[i-1]) {
                if (direction == 0) direction = -1;
                else if (direction == 1) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 2, 3};

    bool ans = obj.isMonotonic(nums);

    cout << (ans ? "true" : "false");

    return 0;
}
