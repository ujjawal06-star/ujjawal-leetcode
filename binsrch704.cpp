#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1, low = 0, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << obj.search(nums, target);
    return 0;
}
