#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stack;
        int res = 0;
        for (int num : nums) {
            while (!stack.empty() && stack.back() > num)
                stack.pop_back();
            if (num == 0)
                continue;
            if (stack.empty() || stack.back() < num) {
                res++;
                stack.push_back(num);
            }
        }
        return res;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 0, 3, 4};
    cout << obj.minOperations(nums);
    return 0;
}
