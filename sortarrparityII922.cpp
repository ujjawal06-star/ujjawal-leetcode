#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd, result;

        for (int x : nums) {
            if (x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        int i = 0, j = 0;
        for (int k = 0; k < nums.size(); k++) {
            if (k % 2 == 0) result.push_back(even[i++]);
            else result.push_back(odd[j++]);
        }

        return result;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {4,2,5,7};
    vector<int> ans = obj.sortArrayByParityII(nums);
    for (int x : ans) cout << x << " ";
}