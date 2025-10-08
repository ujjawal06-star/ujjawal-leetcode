#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == tar) {
                return mid;
            }
            // Left half sorted
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= tar && tar < nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            // Right half sorted
            else {
                if (nums[mid] < tar && tar <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Rotated sorted array
    int target = 0;
    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    cout << "Target: " << target << endl;
    int index = s.search(nums, target);
    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found." << endl;
    return 0;
}
