#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int it = nums.size() - 2, pivot, i;
        while (it >= 0 && nums[it] >= nums[it + 1]) it--;
        if (it == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        pivot = it;
        it = nums.size() - 1;
        while (it > pivot && nums[it] <= nums[pivot]) it--;
        i = it;
        swap(nums[pivot], nums[i]);
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3}; // Example input

    cout << "Original permutation: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
