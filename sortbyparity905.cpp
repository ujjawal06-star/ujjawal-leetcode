#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                swap(nums[left], nums[i]);
                left++;
            }
        }
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,1,2,4};
    vector<int> res = s.sortArrayByParity(nums);
    for(int x : res) cout << x << " ";
}
