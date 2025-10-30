#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double Sum = 0;
        double MaxSumAv = numeric_limits<double>::lowest();
        for (int r = 0; r < nums.size(); r++) {
            Sum += nums[r];
            if (r >= k - 1) {
                MaxSumAv = max(MaxSumAv, Sum / k);
                Sum -= nums[r - k + 1];
            }
        }
        return MaxSumAv;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << obj.findMaxAverage(nums, k);
    return 0;
}
