#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid;
        if (target > nums[high]) {
            return high + 1;
        }

        while (low <= high) {
            mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};  // Example input
    int target = 5;

    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    cout << "Target: " << target << endl;

    int pos = s.searchInsert(nums, target);
    cout << "Insert position: " << pos << endl;

    return 0;
}
