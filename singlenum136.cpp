#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int n : nums) {
            res ^= n; // XOR operation
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2}; // Example input

    cout << "Array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    int ans = s.singleNumber(nums);
    cout << "Single number (unique element): " << ans << endl;

    return 0;
}
