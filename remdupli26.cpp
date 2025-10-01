#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int uniqueIndex = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[uniqueIndex]) {
                uniqueIndex++;
                nums[uniqueIndex] = nums[i];
            }
        }
        return uniqueIndex + 1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // Example input

    cout << "Original array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    int newSize = s.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New size: " << newSize << endl;

    return 0;
}
