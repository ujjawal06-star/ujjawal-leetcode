#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 2, 3, 4, 2, 5};  // Example input
    int val = 2;

    cout << "Original array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    int newSize = s.removeElement(nums, val);

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New size: " << newSize << endl;

    return 0;
}
